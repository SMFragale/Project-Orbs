using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ScriptableObjectArchitecture;

//https://www.youtube.com/watch?v=C9qoYdslLcg&list=PLLH3mUGkfFCXQcNBz_FZDpqJfQlupTznd&index=2
public class PlayerMotor : MonoBehaviour
{
    CharacterController controller;
    SwipeInput swipeInput;

    public float jumpForce = 4.0f;
    public float gravity = 12.0f;
    private float verticalVelocity;
    
    public FloatReference forwardSpeed;
    public float horizontalSpeed = 1.0f;
    private int lane = 1;
    private int numLanes = 3;
    public float laneDistance = 0.8f;
    public float turnSpeed = 0.05f;
    public float isGroundedThreshold = 0.02f;


    private bool moveLeftIntent = false;
    private bool moveRightIntent = false;
    private bool jumpIntent = false;
    private bool diveIntent = false;


    private void Start() {
        controller = GetComponent<CharacterController>();
        swipeInput = GetComponent<SwipeInput>();
        swipeInput.OnSwipe.AddListener(Move);
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

    private void Move(  SwipeDirection dir)
    {
        if(dir == SwipeDirection.Right)
            MoveLane(true);
        else if(dir == SwipeDirection.Left)
            MoveLane(false);
        else if(dir == SwipeDirection.Up)
        {
            jumpIntent = true; 
        }
        else if(dir == SwipeDirection.Down) 
        {
            diveIntent = true;
        }
    }

    private void CheckKeyboardInput() {
        if(Input.GetKeyDown(KeyCode.LeftArrow)) {
            moveLeftIntent = true;
        }
        if(Input.GetKeyDown(KeyCode.RightArrow)) {
            moveRightIntent = true;
        }
        if(Input.GetKeyDown(KeyCode.UpArrow)) {
            jumpIntent = true;
        }
        if(Input.GetKeyDown(KeyCode.DownArrow)) {
            //Down dash
            diveIntent = true;
        }
    }

    private void CheckMoveIntent() {
        if(moveRightIntent) {
            MoveLane(true);
            moveRightIntent = false;
        }

        else if(moveLeftIntent) {
            MoveLane(false);
            moveLeftIntent = false;
        }

        if(IsGrounded()) {
            verticalVelocity = -0.1f;
            
            if(jumpIntent)
            {
                verticalVelocity = jumpForce;
                jumpIntent = false;
            }
        }
        else { //Falling
            verticalVelocity -= (gravity*Time.deltaTime);

            if(diveIntent)
            {
                verticalVelocity =  -jumpForce;
                diveIntent = false;
            }

        }
    }

    private void MoveLane(bool moveRight) {
        if(!moveRight) 
            lane = lane-1 >= 0 ? lane-1: lane;
        else 
            lane = lane + 1 < numLanes ? lane+1: lane;
    }

    private void ContinuousMovement() {
        // Updated Movement
        Vector3 targetPosition = transform.position.z * Vector3.forward;
        if(lane == 0)
            targetPosition += Vector3.left * laneDistance;
        else if(lane == 2)
            targetPosition += Vector3.right * laneDistance; 
        
        //Move delta
        Vector3 moveVector = Vector3.zero;

        //Take where we should be minus where we are right now
        moveVector.x = (targetPosition-transform.position).normalized.x * horizontalSpeed;
        
        moveVector.y = verticalVelocity;
        moveVector.z = forwardSpeed.Value; //Moving forward continously

        Debug.DrawLine(transform.position, new Vector3(targetPosition.x, targetPosition.y, targetPosition.z+0.5f), Color.red, 1);

        controller.Move(moveVector * Time.deltaTime);
    }
    
    private void Update() {
        CheckKeyboardInput();
        CheckMoveIntent();
        ContinuousMovement();
    }
}
