using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ScriptableObjectArchitecture;
using System.Linq;

public class ObjectSpawner : MonoBehaviour
{
    public int horizontalLanes = 1; //Standing from the center, how many lanes are to the right/left (this means the number of lanes will always be odd)
    public int verticalLevels = 3; //Starting from cero, the amount of levels high
    public FloatVariable horizontalDistance; //Distance between the lanes
    public FloatVariable verticalDistance; //Distance between each level
    public GameObject prefab;

    public float secondsDelay = 10;

    public GameObject parent;

    public Transform spawnerPosition;

    public bool spawning = true;

    [SerializeField]
    [Tooltip ("How much time in seconds it will take to spawn the next set of objects")]
    public float spawnDelay = 1f;
    
    public List<Vector3> allLaneCombinations;

    private void Start() {
        allLaneCombinations = GetAllLaneCombinations();
        if(spawning) {
            StartCoroutine(SpawnContinuousOnGround(10, 2));
        }
    }

    public IEnumerator SpawnContinuousOnGround(int number, int howMany) {
        yield return new WaitForSeconds(1);
        List<int> objLanes = new List<int> { -1, 0, 1 };

        int iterations = objLanes.Count - howMany;

        for (int i = 0; i < iterations; i++) {
            int random = Random.Range(0, objLanes.Count);
            objLanes.Remove(random);
        }

        for(int j = 0; j < number; j++) {
            for (int i = 0; i < objLanes.Count; i++) {
                Vector3 offset = new Vector3(horizontalDistance.Value*objLanes[i], 0, 0);
                SpawnOne(offset);
            }
            yield return new WaitForSeconds(spawnDelay);
        }

        if(spawning) {
            yield return new WaitForSeconds(secondsDelay);
            StartCoroutine(SpawnContinuousOnGround(number, howMany));
        }
    }

    private void SpawnOne(Vector3 offset) {
        Vector3 spawnPosition = spawnerPosition.position + offset;
        var obj = Instantiate(prefab, spawnPosition, Quaternion.identity);
        obj.transform.parent = parent.transform;
    }

    private List<Vector3> GetAllLaneCombinations() {
        List<Vector3> combinations = new List<Vector3>();
        for(int lane = -horizontalLanes; lane <= horizontalLanes; lane++) {
            for(int level = 0; level <= verticalLevels; level++) {
                combinations.Add(new Vector3(lane, level, 0));
            }
        }
        return combinations;
    }

    //Spawns many objects at the same time on different lanes. howMany indicates how many objects it will spawn on the same z position, number indicates how many times this process will repeat
    public IEnumerator SpawnMany(int number, int howMany) {
        yield return new WaitForSeconds(1);

        List<Vector3> laneCombinations;

        for(int i = 0; i < number; i++) {
            laneCombinations = new List<Vector3>(allLaneCombinations);
            for(int j = 0; j < howMany; j++) {
                int random = Random.Range(0, laneCombinations.Count);
                Vector3 offset = laneCombinations.ElementAt(random);
                laneCombinations.RemoveAt(random);
                SpawnOne(offset);
            }
            yield return new WaitForSeconds(spawnDelay);
        }
    }

}
