using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    //Loads scene unloading the current active scene
    public void LoadScene(string sceneName) {
        SceneManager.LoadScene(sceneName);
    }

    //Loads scene but keeping the current scene loaded
    public void LoadSceneAdditive(string sceneName) {
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
    }

    //Unloads a scene as long as it's not active scene
    public void UnloadScene(string sceneName) {
        SceneManager.UnloadSceneAsync(sceneName);
    }
}
