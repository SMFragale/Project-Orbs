using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This class will initialize all the global values (Scriptable Objects) so that they don't
//retain the same values after the game endss
public class LevelSetup : MonoBehaviour
{
    [SerializeField]
    private CurrentLevelValues currentValues;

    [SerializeField]
    private float initialScrollSpeed = 0.5f;

    private void Awake() {
        currentValues.scrollSpeed = initialScrollSpeed;
    }
}
