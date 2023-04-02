using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(ChunkSpawnTest))]
public class ChunkSpawnTestEditor : Editor
{
   public override void OnInspectorGUI()
    {
        ChunkSpawnTest test = (ChunkSpawnTest)target;
        test.x = EditorGUILayout.IntField("X", test.x);
        test.z = EditorGUILayout.IntField("Z", test.z);
        test.prefab = (GameObject)EditorGUILayout.ObjectField("Prefab", test.prefab, typeof(GameObject), true);
        test.csg = (ChunkSpawnGrid)EditorGUILayout.ObjectField("Chunk Spawn Grid", test.csg, typeof(ChunkSpawnGrid), true);

        if(GUILayout.Button("Spawn")) {
            test.ExecuteTest();
        }
    }
}
