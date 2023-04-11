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

public class AdaptableSpawnGrid : MonoBehaviour
{
    [System.Serializable]
    public class SpawnEvent : UnityEvent<int, int, GameObject> {}

    public SpawnEvent spawnEvent;

    [SerializeField]
    private int yOffset = 0;

    [SerializeField]
    private int rows = 5;

    [SerializeField]
    private int cols = 5;

    [SerializeField]
    private float ZMin = -1;

    [SerializeField]
    private float XMin = -1;

    private float ZInterval;
    private float XInterval;

    public bool drawGrid = false;


    void Start()
    {
        spawnEvent.AddListener(Spawn);
    }


    private void Update() {
        ZInterval = Mathf.Abs(2 * ZMin) / (rows - 1);
        XInterval = Mathf.Abs(2 * XMin) / (cols - 1);

        if(drawGrid) {
            DrawGrid();
        }
    }



    private void DrawGrid() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                Vector2 realCoords = TransformCoords(i, j);

                Vector3 botLeft = new Vector3(realCoords[0] - XInterval, yOffset, realCoords[1] - ZInterval);
                Vector3 topLeft = new Vector3(realCoords[0] - XInterval, yOffset, realCoords[1] + ZInterval);
                Vector3 topRight = new Vector3(realCoords[0] + XInterval, yOffset, realCoords[1] + ZInterval);
                Vector3 botRight = new Vector3(realCoords[0] + XInterval, yOffset, realCoords[1] - ZInterval);

                Debug.DrawLine(botLeft, topLeft);
                Debug.DrawLine(topLeft, topRight);
                Debug.DrawLine(topRight, botRight);
                Debug.DrawLine(botRight, botLeft);

            }
        }
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
