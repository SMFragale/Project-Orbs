using UnityEngine;
using ScriptableObjectArchitecture;

public class Spinning : MonoBehaviour
{
    [SerializeField]
    //Since all items will rotate at the same speed, this value is global and updated somewhere else
    private FloatReference rotationAngle;

    private void Update()
    {
        transform.rotation = Quaternion.Euler(0.0f, rotationAngle.Value, 0.0f);
    }
}