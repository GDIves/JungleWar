using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyByTime : MonoBehaviour
{
    private float time = 1f;

	void Start ()
	{
	    Destroy(this.gameObject, time);
	}
}
