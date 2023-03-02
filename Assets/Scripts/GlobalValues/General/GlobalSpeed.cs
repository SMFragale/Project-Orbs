using UnityEngine;
using ScriptableObjectArchitecture;

public class GlobalSpeed : MonoBehaviour
{
    [SerializeField]
    private FloatReference currentSpeed = null;
    [SerializeField]
    private float maxSpeed = 4.0f;
    [SerializeField]
    private float timeToMaxSpeed = 60.0f; //Time in seconds for max speed

    private float timeElapsed = 0;

    private float initialSpeed = 1.0f;

    private void Awake() {
        currentSpeed.Value = initialSpeed;
    }

    public void SpeedChanged() {
        Debug.Log("Speed changed");
    }
    
    private void Update() {
        timeElapsed += Time.deltaTime;
        currentSpeed.Value = Mathf.Lerp(initialSpeed, maxSpeed, timeElapsed / timeToMaxSpeed);

    }
}
