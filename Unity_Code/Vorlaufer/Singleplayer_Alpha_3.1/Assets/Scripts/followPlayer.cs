﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// Kamera folgt Player Script
public class followPlayer : MonoBehaviour {

	public GameObject player;       

	private Vector3 offset;   
	private Vector3 zOffset;   

	private Vector3 moveVector;


	void Start () 
	{
		offset = transform.position - player.transform.position;
		zOffset.z = offset.z;

	}
		
	void LateUpdate () 
	{
		moveVector = player.transform.position + offset;

		//Y
		moveVector.y = Mathf.Clamp(moveVector.y,4,4);
		//Z
		moveVector.z = zOffset.z;	

		transform.position = moveVector;
	}
}