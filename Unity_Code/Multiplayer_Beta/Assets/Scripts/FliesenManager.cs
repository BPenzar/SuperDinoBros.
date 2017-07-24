using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// Funktion zum Random zusammensetzen der Spielwelt (mit einzelnen Fliesen)
// Fliesen anstatt Tiles genannt...
public class FliesenManager : MonoBehaviour {

	//Fliesen Objekte
	public GameObject[] fliesen;
	private Transform playerTransform;
	//Verschiebung auf X-Achse
	private float spawnX = 20.0f;
	private float fliesenLaenge = 30.0f;
	//Gewünschte aktive Fliesenmenge (muss für Multiplayer bestimmt angepasst werden)
	private int fliesenAufBildschirm = 3;

	private int letzteFlieseIndex = 0;
	private float sichereZone = 45.0f;
	private List<GameObject> aktiveFliesen;

	void Start () {
		aktiveFliesen = new List<GameObject>();
		// Spieler Position
		playerTransform = GameObject.FindGameObjectWithTag ("Player").transform;

		// Start-Fliesen initialisieren
		for (int i=0; i < fliesenAufBildschirm; i++){
			//Ersten 2 Fliesen ohne Hindernisse (1. Fliese)
			/*	if (i <2)
				spawnFliesen (0);		
			else
			*/
				spawnFliesen ();	
		};
	}


	void Update () {
		// Bei verschieben vom Spieler, alte Fliesen löschen, neue initialisieren)
		if (playerTransform.position.x - sichereZone > (spawnX - fliesenAufBildschirm * fliesenLaenge)) {
			spawnFliesen ();
			deleteTile ();
		}
	}

	// Funktion zum initialisieren einer neuen Fliese
	void spawnFliesen (int fliesenIndex = -1)
	{
		GameObject go;
		if (fliesenIndex == -1)
			go = Instantiate (fliesen [randomFliesenIndex()]) as GameObject;
		else 
			go = Instantiate (fliesen [fliesenIndex]) as GameObject;
		go.transform.SetParent (transform);
		go.transform.position = Vector3.right * spawnX;
		spawnX += fliesenLaenge;
		aktiveFliesen.Add (go);
	}

	void deleteTile()
	{
		Destroy (aktiveFliesen [0]);
		aktiveFliesen.RemoveAt (0);
	}
		
	int randomFliesenIndex()
	{
		if (fliesen.Length <= 1)
			return 0;

		int randomIndex = letzteFlieseIndex;
		while (randomIndex == letzteFlieseIndex) 
		{
			randomIndex = Random.Range (0, fliesen.Length);
		}

		letzteFlieseIndex = randomIndex;
		return randomIndex;
	}
}
