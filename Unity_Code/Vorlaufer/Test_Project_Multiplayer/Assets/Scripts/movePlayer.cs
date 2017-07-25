using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movePlayer : MonoBehaviour {

	private CharacterController controller;
	public float speed = 5.0f;
	private Vector3 moveVector;
	public float standardgeschwindigkeit = 5.0f;

	private float vertivalVelocity = 0.0f;
	private float gravity = 30.0f;

	void Start () {
		controller = GetComponent<CharacterController>();
	}
		
	void Update () {
		moveVector = Vector3.zero;


		//X-Achse (Rechts/Links)
		// Geschwindigkeit mit Pfeilen (rechts/links) mitbestimmen
		moveVector.x = standardgeschwindigkeit*2 + Input.GetAxisRaw("Horizontal") * speed;

		//Y-Achse (Hoch/Runter)
		//Springen
		if (controller.isGrounded) 
		{
			vertivalVelocity = -0.5f;	
			if(Input.GetKeyDown(KeyCode.Space)){
				vertivalVelocity += 15f;
			}
		}
		//Fallen
		else 
		{
			vertivalVelocity -= gravity *Time.deltaTime;
		}
		moveVector.y = vertivalVelocity;
	

		// Bewegung aktualisieren
		controller.Move (moveVector * Time.deltaTime);
	}

	// Public Funktion zum Beschleunigen/Entschleunigen (genutzt im Score.cs Script)
	public void SetSpeed (int modifier){
		standardgeschwindigkeit = 5.0f + modifier;
	}
}

