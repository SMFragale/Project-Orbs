using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    public CharacterController controller;
    public Collider platformCollider;
    //public float offset = 0.2f;

    private void Update() {
        if(controller.gameObject.transform.position.y >= transform.position.y && controller.velocity.y <= 0) {
           
            platformCollider.enabled = true;
        }
        else {
            platformCollider.enabled = false;
        }
    }
}
