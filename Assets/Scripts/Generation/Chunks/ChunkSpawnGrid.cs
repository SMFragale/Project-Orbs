using UnityEngine;
using UnityEngine.Events;

//@Author Sebastian Molano
//The ChunkSpawnGrid defines a spawning grid over the gameobject the script is attached to.
//
//In order to define this Grid, a number of rows and columns must be specified.
//
//Also a point in the bottom left corner of the area where objects can spawn must be defined in order to calculate the size of the Grid
//This point will be replicated on the other side (top-right) in order to complete the square that defines the grid. 
//
//The script will then calculate the interval at which each object should be able to spawn. 

public class ChunkSpawnGrid : MonoBehaviour
{
    [System.Serializable]
    public class SpawnEvent : UnityEvent<int, int, GameObject> {}

    public SpawnEvent spawnEvent;

    [SerializeField]
    private float yOffset = 5f;

    [SerializeField]
    private float rows = 21; //Non inclusive (max: 20 since it starts at cero)

    [SerializeField]
    private float cols = 3; //Non inclusive (max 2 since it starts at cero)

    [SerializeField]
    private float ZMin = -0.5f;

    [SerializeField]
    private float XMin = -0.1f;

    private float ZInterval;
    private float XInterval;


    void Start()
    {
        ZInterval = Mathf.Abs(2 * ZMin) / (rows - 1);
        XInterval = Mathf.Abs(2 * XMin) / (cols - 1);

        Debug.Log("Created ChunkSpawnGrid with intervals: " + new Vector2(ZInterval, XInterval));
        spawnEvent.AddListener(Spawn);
    }


    //Will spawn an object at a given (x, z) position of the grid.
    //Will fail if the given x, z position is outside the bounds of the Grid as defined with Rows, Cols
    public void Spawn(int x, int z, GameObject prefab) {
        if(x < 0 || x >= cols) {
            Debug.LogError("Error trying to spawn a new object in the chunk matrix\nThe X coordinate is greater than the maximum allowed: " + (cols-1) + " or less than zero.");
            return;
        }
        if(z < 0 || z >= rows) {
            Debug.LogError("Error trying to spawn a new object in the chunk matrix\nThe Z coordinate is greater than the maximum allowed: " + (rows-1) + " or less than zero.");
            return;
        }
        Vector2 realCoords = TransformCoords(x, z);

        Debug.Log("Transformed given coords to: " + realCoords);

        Vector3 spawnPoint = new Vector3(realCoords.x, yOffset, realCoords.y);
        GameObject spawned = Instantiate(prefab);
        spawned.transform.parent = this.gameObject.transform;
        spawned.transform.localPosition = spawnPoint;
        spawned.transform.rotation = prefab.transform.rotation;
        spawned.name = prefab.name + "_" + x + z;

        Debug.Log("Spawned object at: " + spawnPoint);

    }

    private Vector2 TransformCoords(int x, int z) {
        float xCoord = (x * XInterval) + XMin;
        float zCoord = (z * ZInterval) + ZMin;

        Vector2 newCoords = new Vector2(xCoord, zCoord);
        return newCoords;
    }
}
