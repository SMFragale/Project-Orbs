using UnityEngine;
using ScriptableObjectArchitecture;

public class CoinPickup : MonoBehaviour
{
    public AudioClip sound;

    [SerializeField]
    private IntVariable coins;

    private void OnTriggerEnter(Collider other) {

        if(other.CompareTag("Garbage Collector")) {
            Destroy(gameObject);
        }
       
        if(other.CompareTag("Player")) {
             //Play sounds, etc
            AudioManager.Instance.PlaySound(sound);
            coins.Value += 1;
            Destroy(gameObject);  
        }
    }
}
