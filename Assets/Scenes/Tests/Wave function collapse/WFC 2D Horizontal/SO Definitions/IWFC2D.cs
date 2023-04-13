using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class IWFC2D : MonoBehaviour
{  

    protected ISpawnGrid2D grid;

    protected SpawnInfo2D spawnInfo;


}


public class SpawnInfo2D
{
    public int xCoord;
    public int yCoord;

    public Quaternion rotation;
    
    public GameObject prefab;

}