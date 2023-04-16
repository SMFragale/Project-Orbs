using UnityEngine;
using System.Collections.Generic;

[RequireComponent(typeof(ISpawnGrid2D))]
public abstract class WFC2D : MonoBehaviour
{  
    //Grid to draw on
    protected ISpawnGrid2D spawnGrid;

    //List of all the possible tiles in this WFC model
    public List<WFCTile2D> possibleTiles;

    protected virtual void Start() {
        spawnGrid = GetComponent<ISpawnGrid2D>();
    }

    public abstract void SpawnIteration();

    //Generates the grid using the WFC algorithm
    public abstract void Generate();
}