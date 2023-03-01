using UnityEngine;

public class TextureScroll : MonoBehaviour
{

    public CurrentLevelValues levelValues;

    private MeshRenderer rend;

    private void Start()
    {
        rend = GetComponent<MeshRenderer>();
    }

    private void Update()
    {
        float offset = Time.time * (-1) * levelValues.scrollSpeed;
        rend.material.SetTextureOffset("_MainTex", new Vector2(0, offset));
    }
}