using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "Tile 2D Horizontal", menuName = "WFC/Tile 2D Horizontal")]
//Represents a tile in a 2D WFC model where items are placed horizontally
public class WFCTile2DH : WFCTile
{
    [Space(10)]

    [Header ("Possible adyacent Tiles for each side")]
    //Each list contains all the possible tiles that each side can have
    [SerializeField]
    private List<TileWeight> FRONT;
    [SerializeField]
    private List<TileWeight> BACK;
    [SerializeField]
    private List<TileWeight> LEFT;
    [SerializeField]
    private List<TileWeight> RIGHT;
}
