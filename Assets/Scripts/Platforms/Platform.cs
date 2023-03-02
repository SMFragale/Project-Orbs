using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    public CharacterController controller;
    public Collider platformCollider;
    //public float offset = 0.2f;

    private void Update() {
        // -- Update collider based on the player's position
        if(controller.gameObject.transform.position.y >= transform.position.y && controller.velocity.y <= 0) {
           
            platformCollider.enabled = true;
        }
        else {
            platformCollider.enabled = false;
        }
        transform.position = new Vector3(transform.position.x, transform.position.y, controller.gameObject.transform.position.z);
    }
}
