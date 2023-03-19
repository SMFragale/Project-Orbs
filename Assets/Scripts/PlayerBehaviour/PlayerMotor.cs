using UnityEngine;

public class PlayerMotor : MonoBehaviour
{
    public float speed = 5f; // the speed of movement
    public float jumpForce = 5f; // the force of the jump
    public float laneWidth = 2f; // the width of each lane
    public int startingLane = 1; // the lane the player starts in
    public float laneChangeSpeed = 10f; // the speed of lane change
    [SerializeField]
    public Rigidbody rb; // the rigidbody component
    private int currentLane; // the current lane the player is in
    private bool isGrounded; // whether the player is on the ground or not

    private float distanceToGround;

    private bool jumpIntent;

    [SerializeField]
    public float xVelocity;

    void Start()
    {
        currentLane = startingLane;
        distanceToGround = GetComponent<BoxCollider>().bounds.extents.y;
    }

    void Update()
    {
        // get input to move left or right
        if (Input.GetKeyDown(KeyCode.LeftArrow) && currentLane > -1)
        {
            currentLane--;
        }
        else if (Input.GetKeyDown(KeyCode.RightArrow) && currentLane < 1)
        {
            currentLane++;
        }

        if (Input.GetKeyDown(KeyCode.Space) && isGrounded) {
            jumpIntent = true;
        }
        // calculate the target position to move towards
        Vector3 targetPosition = transform.position;
        targetPosition.x = currentLane * laneWidth;

        // smoothly move towards the target position
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, laneChangeSpeed * Time.deltaTime);

        xVelocity = targetPosition.x - transform.position.x;

        // add a constant forward speed to the target position to move constantly forward
        transform.position += Vector3.forward * speed * Time.deltaTime;
    }

    private void FixedUpdate() {
        // jump if the player is grounded and the spacebar is pressed
        if (jumpIntent)
        {
            rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            jumpIntent = false;
        }
    }

    private void OnCollisionStay(Collision other) {
        if(other.gameObject.tag == "Ground")
            isGrounded = true;
    }
    private void OnCollisionExit(Collision other) {
        if(other.gameObject.tag == "Ground") {
            isGrounded = false;
        }

        Debug.Log("Collision exited");
        
    }



}