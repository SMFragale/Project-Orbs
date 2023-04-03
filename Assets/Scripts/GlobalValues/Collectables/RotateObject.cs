using UnityEngine;

public class RotateObject : MonoBehaviour
{
    public float speed = 10f; // rotation speed in degrees per second

    void Update()
    {
        transform.Rotate(Vector3.up, speed * Time.deltaTime);
    }
}