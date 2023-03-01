using UnityEngine;

public class FloatObject : MonoBehaviour
{
    public float amplitude = 0.5f;
    public float frequency = 1f;

    private float startY;

    private void Start()
    {
        startY = transform.position.y;
    }

    private void Update()
    {
        transform.position = new Vector3(
            transform.position.x,
            startY + amplitude * Mathf.Sin(frequency * Time.time),
            transform.position.z
        );
    }
}