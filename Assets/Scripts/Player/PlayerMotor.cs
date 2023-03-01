using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//https://www.youtube.com/watch?v=C9qoYdslLcg&list=PLLH3mUGkfFCXQcNBz_FZDpqJfQlupTznd&index=2
public class PlayerMotor : MonoBehaviour
{
    CharacterController controller;

    public float jumpForce = 4.0f;
    private float gravity = 12.0f;
    private float verticalVelocity;
    public float forwardSpeed = 1.0f;
    public float horizontalSpeed = 1.0f;
    private int lane = 1;
    private int numLanes = 3;
    public float laneDistance = 0.8f;
    public float turnSpeed = 0.05f;
    public float isGroundedThreshold = 0.02f;


    private void Start() {
        controller = GetComponent<CharacterController>();
    }

    private void Update() {
        if(Input.GetKeyDown(KeyCode.LeftArrow)) {
            MoveLane(false);
        }
        if(Input.GetKeyDown(KeyCode.RightArrow)) {
            MoveLane(true);
        }

        Vector3 targetPosition = transform.position.z * Vector3.forward;
        if(lane == 0)
            targetPosition += Vector3.left * laneDistance;
        else if(lane == 2)
            targetPosition += Vector3.right * laneDistance; 
        
        //Move delta
        Vector3 moveVector = Vector3.zero;

        //Take where we should be minus where we are right now
        moveVector.x = (targetPosition-transform.position).normalized.x * horizontalSpeed;
        
        if(IsGrounded()) {
            Debug.Log("Is grounded :D");
            verticalVelocity = 0f;

            if(Input.GetKeyDown(KeyCode.UpArrow)) {
                //Jump
                verticalVelocity = jumpForce;
            }
        }
        else { //Falling
            Debug.Log("Is NOT grounded D:");
            verticalVelocity -= (gravity*Time.deltaTime);
            // 
            if(Input.GetKeyDown(KeyCode.DownArrow)) {
                //Down dash
                verticalVelocity =  -jumpForce;
            }

        }
        
        moveVector.y = verticalVelocity;
        moveVector.z = forwardSpeed; //Moving forward continously

        Debug.DrawLine(transform.position, new Vector3(targetPosition.x, targetPosition.y, targetPosition.z+0.5f), Color.red, 1);

        controller.Move(moveVector * Time.deltaTime);

    }

    private void MoveLane(bool moveRight) {
        if(!moveRight) 
            lane = lane-1 >= 0 ? lane-1: lane;
        else 
            lane = lane + 1 < numLanes ? lane+1: lane;
    }


    private bool IsGrounded() {
        Ray groundRay = new Ray(
            new Vector3(
                controller.bounds.center.x,
                (controller.bounds.center.y - controller.bounds.extents.y + isGroundedThreshold),
                controller.bounds.center.z),
                Vector3.down
            );
        
        return Physics.Raycast(groundRay, 0.2f +0.1f);
    }
}
