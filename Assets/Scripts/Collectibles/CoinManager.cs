using UnityEngine;
using ScriptableObjectArchitecture;

public class CoinManager : MonoBehaviour
{
    [SerializeField]
    private IntVariable coins;

    private void Start() {
        coins.Value = 0;
    }
    
}
