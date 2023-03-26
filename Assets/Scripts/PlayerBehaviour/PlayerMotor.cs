using UnityEngine;
using ScriptableObjectArchitecture;

public class PlayerMotor : MonoBehaviour
{

    [Tooltip ("Use global player z position")]
    private FloatVariable playerZPosition;

    [Tooltip ("Player speed based off global speed")]
    public FloatVariable speed;

    public float jumpForce = 5f; // the force of the jump

    [Tooltip ("How wide the player can move on the x axis")]
    public FloatVariable laneWidth; // the width of each lane

    [Tooltip ("Maximum amount of lanes to the left or right of the player")]
    public int maxLanes = 1;

    [Tooltip ("At which lane the player will start: should be within the maxLanes")]
    public int startingLane = 1; // the lane the player starts in

    [Tooltip ("How fast the player can switch between lanes")]
    public float laneChangeSpeed = 10f; // the speed of lane change

    [HideInInspector]
    public Rigidbody rb; // the rigidbody component

    [SerializeField]
    [HideInInspector]
    public float xVelocity;

    private int currentLane; // the current lane the player is in
    private bool isGrounded; // whether the player is on the ground or not

    private float distanceToGround;

    private bool jumpIntent;
    private bool moveRightIntent;
    private bool moveLeftIntent;

    
    private void Awake() {
        rb = GetComponent<Rigidbody>();    
    }

    void Start()
    {
        currentLane = startingLane;
        distanceToGround = GetComponent<BoxCollider>().bounds.extents.y;
    }

    public void MoveLeft() {
        if(currentLane > -maxLanes) 
            currentLane--;
    }

    public void MoveRight() {
        if(currentLane < maxLanes) 
            currentLane++;
    }

    public void Jump() {
        if(isGrounded)
            jumpIntent = true;
    }

    void Update()
    {
        // get input to move left or right
        if (Input.GetKeyDown(KeyCode.LeftArrow) && currentLane > -maxLanes)
        {
            currentLane--;
        }
        else if (Input.GetKeyDown(KeyCode.RightArrow) && currentLane < maxLanes)
        {
            currentLane++;
        }

        if (Input.GetKeyDown(KeyCode.Space) && isGrounded) {
            jumpIntent = true;
        }
        // calculate the target position to move towards
        Vector3 targetPosition = transform.position;
        targetPosition.x = currentLane * laneWidth.Value;

        // smoothly move towards the target position
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, laneChangeSpeed * Time.deltaTime);

        xVelocity = targetPosition.x - transform.position.x;

        // add a constant forward speed to the target position to move constantly forward
        transform.position += Vector3.forward * speed.Value * Time.deltaTime;
        if(playerZPosition != null)
            playerZPosition.Value = transform.position.z;
    }

    private void FixedUpdate() {
        
        // jump if the player is grounded and the spacebar is pressed
        if (jumpIntent)
        {
            rb.velocity += Vector3.up * jumpForce;
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