using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    public float Forward { get; private set; }

    private float speed = 4f;
    private Animator playerAnimator;

	void Start ()
	{
	    playerAnimator = GetComponent<Animator>();
	    Forward = 0f;
	}
	
	void FixedUpdate ()
	{
        if (playerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Grounded") == false)
            return;
	    float h = Input.GetAxis("Horizontal");
	    float v = Input.GetAxis("Vertical");
	    if (Math.Abs(h) > 0 || Math.Abs(v) > 0)
	    {
	        transform.Translate(new Vector3(h, 0f, v)*speed*Time.deltaTime, Space.World);
            transform.rotation = Quaternion.LookRotation(new Vector3(h, 0f, v));
	        this.Forward = Mathf.Max(Mathf.Abs(h), Mathf.Abs(v));
	        playerAnimator.SetFloat("Forward", Forward);  
	    }
	}
}
