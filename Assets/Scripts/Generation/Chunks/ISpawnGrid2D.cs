using UnityEngine;
using UnityEngine.Events;

//@Author Sebastian Molano
//This interface provides methods to create a grid based on the current objects position.
public abstract class ISpawnGrid2D : MonoBehaviour
{
    [System.Serializable]
    public class SpawnEvent : UnityEvent<int, int, GameObject> {}

    //Calls Spawn method
    public SpawnEvent spawnEvent;

    public bool drawGrid = false;


    void Start()
    {
        spawnEvent.AddListener(Spawn);
    }


    private void Update() {
        if(drawGrid) {
            DrawGrid();
        }
    }

    //Spawns a given prefab on the abstract coordinates x, z of the grid
    public abstract void Spawn(int x, int z, GameObject prefab);

    //Draws the grid on 3D space
    public abstract void DrawGrid();

    //Transforms abstract coordinates of the grid into real 3D space coordinates
    public abstract Vector2 TransformCoords(int x, int z);

}