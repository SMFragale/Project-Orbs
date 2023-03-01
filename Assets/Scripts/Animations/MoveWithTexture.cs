using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveWithTexture : MonoBehaviour
{
    public CurrentLevelValues levelValues;
    public float speed;
    
    private void FixedUpdate() {
        transform.Translate(Vector3.back * levelValues.scrollSpeed*speed * Time.deltaTime, Space.World);
    }
}
