using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossMovement : MonoBehaviour
{
    public float floatAmplitude = 0.5f;
    public float floatFrequency = 1f;

    public float speed = 1.0f;
    private CharacterController controller;

    // Update is called once per frame
    void FixedUpdate()
    {
        controller = GetComponent<CharacterController>();
        Vector3 moveVector = Vector3.forward;

        //Float 
        moveVector.y = floatAmplitude * Mathf.Sin(floatFrequency * Time.time);

        controller.Move(moveVector * speed * Time.deltaTime);
    }
}
