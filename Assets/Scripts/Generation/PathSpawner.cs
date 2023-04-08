using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


namespace PathCreation
{
    [CustomEditor(typeof(PathSpawner))]
    public class MyScriptEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            PathSpawner myScript = (PathSpawner)target;

            if (GUILayout.Button("Update"))
            {
                if (!Application.isPlaying)
                    return;
                myScript.UpdateSpawns();
            }
        }
    }

    public class PathSpawner : MonoBehaviour
    {
        public PathCreator pathCreator;
        public GameObject toSpawnPrefab;
        private float _totalDist;
        
        [SerializeField, Range(0.1f,10.0f)]
        private float _interval;
        

        public float getInterval()
        {
            return _interval;
        }

        public void setInterval(float value)
        {
            _interval = value;
            
            if (!Application.isPlaying)
                return;
                
            UpdateSpawns();
        }

        void Start() {
            _interval = 1;
            if (pathCreator != null)
            {
                // Subscribed to the pathUpdated event so that we're notified if the path changes during the game
                pathCreator.pathUpdated += OnPathChanged;
                transform.SetParent(pathCreator.gameObject.transform);
                transform.position = new Vector3(0,0,0);
                UpdateSpawns();
            }
        }



        // If the path changes during the game, update the distance travelled so that the follower's position on the new path
        // is as close as possible to its position on the old path
        void OnPathChanged() {
            UpdateSpawns();
        }

        private void OnIntervalChanged()
        {
            UpdateSpawns();
        }

        public void UpdateSpawns()
        {
            ClearChildren();
            SpawnAtInterval();
        }

        void ClearChildren()
        {
            for(int i  = transform.childCount-1; i >= 0; i--)
            {
                Destroy(transform.GetChild(i).gameObject);
            }
        }

        void SpawnAtInterval()
        {
            _totalDist = pathCreator.path.length;
            int numSpawn = (int)(_totalDist/_interval);
            for(int i = 0; i <= numSpawn; i++)
            {
                GameObject instance = Instantiate(toSpawnPrefab, transform);
                instance.transform.position = pathCreator.path.GetPointAtDistance(_interval*i, EndOfPathInstruction.Stop);
            }
            
        }

    }
}
