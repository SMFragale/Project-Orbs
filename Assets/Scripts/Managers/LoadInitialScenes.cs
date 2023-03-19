using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LoadInitialScenes : MonoBehaviour
{
    [SerializeField]
    private string initialScene;
    // Start is called before the first frame update
    void Start()
    {
        if (initialScene != "")
            SceneManager.LoadSceneAsync(initialScene, LoadSceneMode.Additive);
    }
}
