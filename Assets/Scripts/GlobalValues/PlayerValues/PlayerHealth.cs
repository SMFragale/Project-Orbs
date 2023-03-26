using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ScriptableObjectArchitecture;

public class PlayerHealth : MonoBehaviour
{
    [SerializeField]
    private FloatReference currentHealth = null;

    [SerializeField]
    private FloatReference maxHealth = null;

    private void Awake() {
        currentHealth.Value = maxHealth.Value;
    }

    public void HealthChanged() {
        Debug.Log("New health: " + currentHealth.Value);
        if(currentHealth.Value < 0)
            Destroy(gameObject);
    }

}
