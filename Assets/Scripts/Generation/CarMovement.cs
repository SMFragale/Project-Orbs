using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CarMovement : MonoBehaviour
{
    public float floatAmplitude = 0.5f;
    public float floatFrequency = 1f;

    public float speed = 1;

    // Update is called once per frame
    void Update()
    {
        Vector3 moveVector = Vector3.right * speed;

        //Float 
        moveVector.y = floatAmplitude * Mathf.Sin(floatFrequency * Time.time);

        transform.Translate(moveVector * Time.deltaTime);
    }
}
