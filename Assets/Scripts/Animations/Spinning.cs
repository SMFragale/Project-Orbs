using UnityEngine;

public class Spinning : MonoBehaviour
{
    public float speed = 1f; // The speed of the spin

    private void FixedUpdate() {
        transform.Rotate(Vector3.up, speed * Time.deltaTime, Space.World); // Spin the object around the Y axis
    }
}