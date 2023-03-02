using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectiblePickup : MonoBehaviour
{
    public AudioClip sound;
    private void OnTriggerEnter(Collider other) {
        if(other.CompareTag("Player")) {
             //Play sounds, etc
            AudioManager.Instance.PlaySound(sound);
            Destroy(gameObject);  
        }
    }
}
