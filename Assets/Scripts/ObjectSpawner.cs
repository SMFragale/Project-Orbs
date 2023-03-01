using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    public GameObject prefab;
    public GameObject spawner1;
    public GameObject spawner2;
    public GameObject spawner3;

    public float spawnDelay = 1f;

    public int maxSpawnCount = 10; // The maximum number of objects to spawn

    private void Start() {
        Spawn(2, 10);
    }

    public void Spawn(int lane, int number) {
        GameObject spawner;
        switch(lane) {
            case 1:
                spawner = spawner1;
                break;
            case 2:
                spawner = spawner2;
                break;
            default:
                spawner = spawner3;
                break;
        }
        StartCoroutine(SpawnCoroutine(spawner, number));

    }

    private IEnumerator SpawnCoroutine(GameObject spawner, int number) {
        int spawnCounter = 0;
        while(spawnCounter < number) {
            Instantiate(prefab, spawner.transform);
            spawnCounter++;
            yield return new WaitForSeconds(spawnDelay);
        }
    }

}
