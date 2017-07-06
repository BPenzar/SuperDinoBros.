using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movePlayer : MonoBehaviour {

	private CharacterController controller;
	public float speed = 1.0f;
	private Vector3 moveVector;
	public float standardgeschwindigkeit = 1.0f;

	private float vertivalVelocity = 0.0f;
	private float gravity = 120.0f;

	private bool isDead = false;
	//private float startTime;

	void Start () {
		controller = GetComponent<CharacterController>();
	//	startTime = Time.time;
	}
		
	void Update () {

		if (isDead)
			return;
		
		moveVector = Vector3.zero;


		//X-Achse (Rechts/Links)
		// Geschwindigkeit mit Pfeilen (rechts/links) mitbestimmen
		//moveVector.x = standardgeschwindigkeit*2 + Input.GetAxisRaw("Horizontal") * speed;

		moveVector.x = standardgeschwindigkeit + speed;


	/*	if (Input.GetMouseButton (0)) {
			if (Input.mousePosition.x > Screen.width / 2)
				moveVector.x = standardgeschwindigkeit*2 + speed;
			else
				moveVector.x = standardgeschwindigkeit*2 - speed;
		}
	*/

		//Y-Achse (Hoch/Runter)
		//Springen
		if (controller.isGrounded) 
		{
			vertivalVelocity = -0.5f;	
			if(Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButton (0)){
				vertivalVelocity += 25f;
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
		standardgeschwindigkeit = standardgeschwindigkeit + modifier;
	}

	// Aufgerufen wenn ControllerCollider etwas stößt (hit)
	private void OnControllerColliderHit(ControllerColliderHit hit){
		if (hit.point.y > transform.position.y + controller.radius*2 && hit.gameObject.tag == "Enemy")
			Death ();
		if(hit.gameObject.tag == "GroundEnemy")
			Death ();
	}

	private void Death (){
		isDead = true;
		GetComponent<Score> ().onDeath ();
		Debug.Log ("dead");
	}
}

