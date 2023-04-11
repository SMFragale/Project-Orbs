using UnityEngine;

//Monobehaviour to be used with ChunkSpawnTestEditor which provides a
//button to Spawn objects on a ChunkSpawnGrid
public class GridSpawnTest : MonoBehaviour
{
    [SerializeField]
    public int x;
    [SerializeField]
    public int z;
    [SerializeField]
    public GameObject prefab;

    public AdaptableSpawnGrid asg;

    public void ExecuteTest() {
        asg.spawnEvent.Invoke(x, z, prefab);
    }


}

