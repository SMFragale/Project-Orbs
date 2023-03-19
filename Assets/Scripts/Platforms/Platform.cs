using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    [SerializeField]
    public PlayerMotor motor;
    private Rigidbody controller;
    private Collider platformCollider;
    //public float offset = 0.2f;

    private void Start() {
        controller = motor.rb;
        platformCollider = GetComponent<BoxCollider>();
    }

    private void Update() {
        // -- Update collider based on the player's position
        if(controller.gameObject.transform.position.y >= transform.position.y && controller.velocity.y <= 0 && motor.xVelocity == 0) {
           
            platformCollider.isTrigger = false;
        }
        else if(controller.velocity.y <= 0) {
            platformCollider.isTrigger = false;
            if(motor.xVelocity != 0) {
                platformCollider.isTrigger = true;
            }
        }
        else {
            platformCollider.isTrigger = true;
        }
        transform.position = new Vector3(transform.position.x, transform.position.y, controller.gameObject.transform.position.z);
    }

}
