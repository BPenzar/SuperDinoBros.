using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DeathMenu : MonoBehaviour {

	public Text scoreText;
	//public Image backgroundImage;

	private bool gezeigt = false;
	//private float transition = 0.0f;

	// Use this for initialization
	void Start () {
		gameObject.SetActive (false);	
	}
	
	// Update is called once per frame
	void Update () {
		if (!gezeigt)
			return;

	//	transition += Time.deltaTime;
	//	backgroundImage.color = Color.Lerp (new Color (0, 0, 0, 0), Color.black, transition);
	}

	public void showEndMenue(float score){
		gameObject.SetActive (true);
		scoreText.text = ((int)score).ToString ();
	//	gezeigt = true;
	}

	public void Restart(){

		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
		
	}

	public void ToMenu(){

        FindObjectOfType<AudioManager>().stopSound("InGame");
        FindObjectOfType<AudioManager>().rightVolume("MainMenu");
        SceneManager.LoadScene ("menunew");
	}
}
