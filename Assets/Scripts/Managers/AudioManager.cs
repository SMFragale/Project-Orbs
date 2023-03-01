using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance {get; private set;}
    private AudioSource audioPlayer;

    private void Awake() {
        if(Instance != null && Instance != this) {
            Destroy(this);
        }
        else {
            Instance = this;
        }
    }

    private void Start() {
        audioPlayer = gameObject.GetComponent<AudioSource>();
    }

    public void PlaySound(AudioClip sound) {
        audioPlayer.PlayOneShot(sound);
    }
}
