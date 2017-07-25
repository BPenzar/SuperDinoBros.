using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// Kamera folgt Player Script
public class followPlayer : MonoBehaviour {

	private Transform player;

	private Vector3 offset;   
	private Vector3 zOffset;   

	private Vector3 moveVector;


	void Start () 
	{
		player = GameObject.FindGameObjectWithTag ("Player").transform;
		offset = transform.position - player.position;
		zOffset.z = offset.z;

	}
		
	void LateUpdate () 
	{
		moveVector = player.transform.position + offset;

		//Y
		moveVector.y = Mathf.Clamp(moveVector.y,2,2);
		//Z
		moveVector.z = zOffset.z;	

		transform.position = moveVector;
	}
}