using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    public Transform playerPosition;
    public Collider platformCollider;

    private void Update() {
        if(playerPosition.position.y >= transform.position.y) {
            platformCollider.enabled = true;
        }
        else {
            platformCollider.enabled = false;
        }
    }
}
