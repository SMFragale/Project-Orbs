using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    private CharacterController controller;

    private const float _turnspeed = 0.05f;
    public float moveDistance = 10f; // The distance the player can move in the x-axis
    public float jumpForce = 10f; // The force of the player's jump
    public float gravity = 20f; // The gravity applied to the player
    private float verticalVelocity;
    private float speed = 7.0f;
    private int lane = 1;

    public float lane_distance = 1.5f;
    
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
        if(lane == 0) {
            targetPosition += Vector3.left * lane_distance;
        }
        else if(lane == 2) {
            targetPosition += Vector3.right * lane_distance;
        }

        Vector3 moveVector = Vector3.zero;
        moveVector.x = (targetPosition - transform.position).normalized.x * speed;

        // Calculate gravity 
        //If is grounded
        if (IsGrounded()) {
            verticalVelocity = -0.1f;

            if(Input.GetKeyDown(KeyCode.Space)) {
                verticalVelocity = jumpForce;
            }
        }
        else {
            verticalVelocity -= gravity * Time.deltaTime;

            //Fast falling
            if(Input.GetKeyDown(KeyCode.Space)) {
                verticalVelocity = -jumpForce;
            }
        }

        moveVector.y = verticalVelocity;

        //Move 
        controller.Move(moveVector * Time.deltaTime);

        /** Will rotate the player based on where he's moving. Will only work properly if
        ** the player is going forward.
        Vector3 direction = controller.velocity;
        Debug.Log(controller.velocity);
        if(direction != Vector3.zero) {
            direction.y = 0;
            transform.forward = Vector3.Lerp(transform.forward, direction, _turnspeed);
        }
        **/
    }

    private void MoveLane(bool moveRight) {
        if(!moveRight) {
            lane = lane-1 >= 0? lane-1: lane;
        }
        else {
            lane = lane+1 < 3? lane+1: lane;
        }
    }

    private bool IsGrounded() {
        Ray groundRay = new Ray(new Vector3(
            controller.bounds.center.x, 
            (controller.bounds.center.y - controller.bounds.extents.y) + 0.2f,
            controller.bounds.center.z),
            Vector3.down);
        
        Debug.DrawRay(groundRay.origin, groundRay.direction, Color.cyan, 1.0f);
        
        return Physics.Raycast(groundRay, 0.2f+0.1f);
        
    }

}