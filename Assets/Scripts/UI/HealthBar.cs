using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ScriptableObjectArchitecture;

//Will work with any health bar display that works
//as a filled image and any health references
public class HealthBar : MonoBehaviour
{
    [SerializeField]
    public Image healthbar;

    [SerializeField]
    public FloatReference maxHealth;

    [SerializeField]
    public FloatReference currentHealth;

    private void Update() {
        healthbar.fillAmount = currentHealth.Value / maxHealth.Value;
    }

}
