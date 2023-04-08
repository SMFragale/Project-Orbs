using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PathCreation
{
    public class PathSpawner : MonoBehaviour
    {
        public PathCreator pathCreator;
        public GameObject toSpawnPrefab;
        public float interval = 1;
        float totalDist;

        void Start() {
            Debug.Log("START");
            if(pathCreator != null)
                OnPathChanged();
        }

        void Awake()
        {
            Debug.Log("AWAKE");
            
            if (pathCreator != null)
            {
                // Subscribed to the pathUpdated event so that we're notified if the path changes during the game
                pathCreator.pathUpdated += OnPathChanged;
                transform.SetParent(pathCreator.gameObject.transform);
                transform.position = new Vector3(0,0,0);
            }
        }


        // If the path changes during the game, update the distance travelled so that the follower's position on the new path
        // is as close as possible to its position on the old path
        void OnPathChanged() {
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
            totalDist = pathCreator.path.length;
            int numSpawn = (int)(totalDist/interval);
            for(int i = 0; i <= numSpawn; i++)
            {
                GameObject instance = Instantiate(toSpawnPrefab);
                instance.transform.SetParent(transform);
                instance.transform.position = pathCreator.path.GetPointAtDistance(interval*i, EndOfPathInstruction.Stop);
            }
        }
    }

}
