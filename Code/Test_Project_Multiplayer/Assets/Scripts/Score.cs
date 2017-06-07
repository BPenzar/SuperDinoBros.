using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour {

	private float score = 0.0f;
	public Text scoreText;

	private int schwierigkeit = 1;
	private int schwierigkeitMax = 10;
	private int punkteBisNaechstesLevel = 100;

	void Start () {
		scoreText.text = "Highscore";
	}
	
	// Highscore (in Abhängigkeit der Position des Spielers)
	void Update () {


		if (score >= punkteBisNaechstesLevel) {
			LevelUp ();
		}

		//Score = X-Position Player
		score = GameObject.FindGameObjectWithTag ("Player").transform.position.x;
		scoreText.text = ((int)score).ToString ();
	}


	void LevelUp (){
		// Debug.Log (schwierigkeit);
		// Debug.Log (punkteBisNaechstesLevel);

		if (schwierigkeit == schwierigkeitMax)
			return;
		
		punkteBisNaechstesLevel *= 2;
		schwierigkeit++;
		GetComponent<movePlayer>().SetSpeed (schwierigkeit);

		// Debug.Log (schwierigkeit);
	}
}
