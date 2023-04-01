using UnityEngine;

//Monobehaviour to be used with ChunkSpawnTestEditor which provides a
//button to Spawn objects on a ChunkSpawnGrid
public class ChunkSpawnTest : MonoBehaviour
{
    [SerializeField]
    public int x;
    [SerializeField]
    public int z;
    [SerializeField]
    public GameObject prefab;

    public ChunkSpawnGrid csg;

    public void ExecuteTest() {
        csg.spawnEvent.Invoke(x, z, prefab);
    }


}

