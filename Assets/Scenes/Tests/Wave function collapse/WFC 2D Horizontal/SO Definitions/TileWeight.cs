using UnityEngine;

[System.Serializable]
public class TileWeight
{
    public WFCTile tile;

    [Range(0,100)]
    public float weight;

}
