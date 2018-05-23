using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    private float hp = 100f;
    private float maxHp = 100f;
    private Slider bloodSlider;
    private bool isUpdateBlood = false;

	void Start ()
	{
	    bloodSlider = transform.Find("Blood/Slider").GetComponent<Slider>();
	}

	void Update () 
    {
	    if (isUpdateBlood)
	    {
            bloodSlider.value = hp / maxHp;
	        isUpdateBlood = false;
	    }
	}

    public void TakeAttack(float attack)
    {
        if (hp > 0)
        {
            hp -= attack;
            isUpdateBlood = true;
        }
        if (hp <= 0)
        {
            GameFacade.Instance.SendGameOver();
        }
    }
}
