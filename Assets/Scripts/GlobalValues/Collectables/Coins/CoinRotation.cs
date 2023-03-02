using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ScriptableObjectArchitecture;

public class CoinRotation : MonoBehaviour
{
    
    [SerializeField]
    private float initialRotationSpeed = 100.0f;

    [SerializeField]
    // Static variable to keep track of the rotation angle for all objects
    private FloatReference rotationAngle = null;

    private void Awake() {
        rotationAngle.Value = 0.0f;
    }

    private void Update()
    {
        // Update the rotation angle based on the rotation speed
        rotationAngle.Value = (rotationAngle.Value + (initialRotationSpeed * Time.deltaTime)) % 360;
        
    }
}
