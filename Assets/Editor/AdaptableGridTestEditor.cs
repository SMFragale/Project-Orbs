using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(GridSpawnTest))]
public class AdaptableGridTestEditor : Editor
{
   public override void OnInspectorGUI()
    {
        GridSpawnTest test = (GridSpawnTest)target;
        test.x = EditorGUILayout.IntField("X", test.x);
        test.z = EditorGUILayout.IntField("Z", test.z);
        test.prefab = (GameObject)EditorGUILayout.ObjectField("Prefab", test.prefab, typeof(GameObject), true);
        test.asg = (AdaptableSpawnGrid)EditorGUILayout.ObjectField("Chunk Spawn Grid", test.asg, typeof(AdaptableSpawnGrid), true);

        if(GUILayout.Button("Spawn")) {
            test.ExecuteTest();
        }
    }
}
