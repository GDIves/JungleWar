using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow : MonoBehaviour
{
    public GameObject explosionEffect;

    private float speed = 20f;
    private Rigidbody rb;
    private float attack = 10f;
    public bool IsCurrent { get; set; }

	void Start ()
	{
	    rb = GetComponent<Rigidbody>();
	}
	
	void FixedUpdate ()
	{
        rb.MovePosition(transform.position + transform.forward * speed * Time.fixedDeltaTime);
	}

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            if (IsCurrent)
            {
                GameFacade.Instance.SendAttack(attack);
                GameFacade.Instance.PlaySoundAudio(AudioManager.SoundShootPerson);
            }
        }
        else
        {
            GameFacade.Instance.PlaySoundAudio(AudioManager.SoundMiss);
        }
        Instantiate(explosionEffect, transform.position, Quaternion.identity);
        Destroy(this.gameObject);
    }
}
