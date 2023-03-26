using UnityEngine;

public class RotateTowards : MonoBehaviour
{
    public Transform target; // The object to rotate towards
    public float rotationSpeed = 1f; // The speed at which to rotate

    void Update()
    {
        Vector3 direction = target.position - transform.position; // Calculate the direction to the target
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg; // Calculate the angle to the target
        Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward); // Create a rotation to the target
        transform.rotation = Quaternion.Slerp(transform.rotation, rotation, rotationSpeed * Time.deltaTime); // Rotate towards the target
    }
}