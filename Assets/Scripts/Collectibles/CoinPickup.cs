using UnityEngine;
using ScriptableObjectArchitecture;

public class CoinPickup : MonoBehaviour
{
    public AudioClip sound;

    [SerializeField]
    private IntVariable coins;

    private void OnTriggerEnter(Collider other) {
        if(other.CompareTag("Player")) {
            //Play sounds, etc
            AudioSource.PlayClipAtPoint(sound, transform.position);
            if(AudioManager.Instance != null)
                AudioManager.Instance.PlaySound(sound);
            coins.Value += 1;
            Destroy(gameObject);  
        }
    }
}
