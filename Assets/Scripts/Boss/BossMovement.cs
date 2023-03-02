using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ScriptableObjectArchitecture;

public class BossMovement : MonoBehaviour
{
    public float floatAmplitude = 0.5f;
    public float floatFrequency = 1f;

    public FloatReference speed = null;
    private CharacterController controller;

    // Update is called once per frame
    void FixedUpdate()
    {
        controller = GetComponent<CharacterController>();
        Vector3 moveVector = Vector3.forward;

        //Float 
        moveVector.y = floatAmplitude * Mathf.Sin(floatFrequency * Time.time);

        controller.Move(moveVector * speed.Value * Time.deltaTime);
    }
}
