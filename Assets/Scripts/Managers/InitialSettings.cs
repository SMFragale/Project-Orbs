using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitialSettings : MonoBehaviour
{

    public int maxFrameRate = 60;
    private void Awake() {
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = maxFrameRate;
    }
}
