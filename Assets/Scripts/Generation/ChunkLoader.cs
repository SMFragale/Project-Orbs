using UnityEngine;
using ScriptableObjectArchitecture;

public class ChunkLoader : MonoBehaviour
{   
    [SerializeField]
    private float renderDistance = 3;

    [SerializeField]
    private float chunkDistance = 50;

    [SerializeField]
    private float chunksRendered = 3;

    [SerializeField]
    private GameObject chunksParent;

    [SerializeField]
    private GameObject chunkPrefab;

    [SerializeField]
    private Transform playerPosition;

    [SerializeField]
    private GameEvent generateChunkEvent;

    public void OnGenerateChunk() {
        float zPosition = chunkDistance * chunksRendered;
        var chunk = Instantiate(chunkPrefab, new Vector3(0, 0, zPosition), Quaternion.identity);
        chunk.transform.parent = chunksParent.transform;
        chunksRendered += 1;
    }

    private void Update() {
        if((chunkDistance*chunksRendered) - playerPosition.position.z <= (renderDistance * chunkDistance))
            generateChunkEvent.Raise();
    }

}
