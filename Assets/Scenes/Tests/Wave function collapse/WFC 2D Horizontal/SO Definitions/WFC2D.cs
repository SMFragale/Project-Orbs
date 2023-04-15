using UnityEngine;

[RequireComponent(typeof(ISpawnGrid2D))]
public abstract class WFC2D : MonoBehaviour
{  
    //Grid to draw on
    protected ISpawnGrid2D spawnGrid;

    //Grid to apply the WFC algorithm in
    protected SpawnInfo2D[,] spawnInfoGrid;

    private void Start() {
        spawnGrid = GetComponent<ISpawnGrid2D>();
        spawnInfoGrid = new SpawnInfo2D[spawnGrid.width, spawnGrid.height];
    }

    //Generates the grid using the WFC algorithm
    public abstract void Generate();

}


public class SpawnInfo2D
{
    public Quaternion rotation;
    
    public WFCTile2D tile;

    public SpawnInfo2D(Quaternion rotation, WFCTile2D tile) {
        this.rotation = rotation;
        this.tile = tile;
    }

}