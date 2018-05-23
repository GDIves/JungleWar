using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowTarget : MonoBehaviour
{
    public Transform target;

    private Vector3 offset = new Vector3(0f, 34f, -33f);
    private float smoothing = 2f;
	
	void FixedUpdate ()
	{
	    Vector3 targetPosition = target.position + offset;
	    transform.position = Vector3.Lerp(transform.position, targetPosition, smoothing*Time.fixedDeltaTime);
        transform.LookAt(target);
	}
}
