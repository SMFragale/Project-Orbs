using UnityEngine;

public class CollectGarbage : MonoBehaviour
{  
    private void OnTriggerEnter(Collider other) {
        if(other.CompareTag("Garbage Collector"))
            Destroy(gameObject);
    }
}
