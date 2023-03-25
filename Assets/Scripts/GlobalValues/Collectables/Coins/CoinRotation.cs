using UnityEngine;
using ScriptableObjectArchitecture;


//This script will manage the rotation of the coins
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
