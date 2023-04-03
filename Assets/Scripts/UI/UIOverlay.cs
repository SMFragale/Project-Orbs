using UnityEngine.UI;
using UnityEngine;
using ScriptableObjectArchitecture;
using TMPro;

public class UIOverlay : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI coinsValue;

    [SerializeField]
    private IntVariable coins;

    private void Update() {
        coinsValue.text = coins.Value.ToString();
    }
}