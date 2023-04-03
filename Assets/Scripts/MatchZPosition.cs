using UnityEngine;

public class MatchZPosition : MonoBehaviour
{
    [SerializeField]
    private Transform objectToMatch;
    [SerializeField]
    private float offset;
    
    private void Start() {
        UpdatePosition();
    }

    private void Update() {
        UpdatePosition();
    }

    private void UpdatePosition() {
        transform.position = new Vector3(transform.position.x, transform.position.y, objectToMatch.position.z + offset);
    }
}
