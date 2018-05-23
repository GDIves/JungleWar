using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;
using UnityEngine.UI;

public class SyncRoleBloodRequest : BaseRequest 
{
    private Slider bloodSlider;
    private float maxHp = 100f;
    private float hp = 100f;
    private bool isUpdateBlood = false;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.SyncRoleBlood;
        bloodSlider = transform.Find("Blood/Slider").GetComponent<Slider>();
        base.Awake();
    }

    void Update()
    {
        if (isUpdateBlood)
        {
            bloodSlider.value = hp/maxHp;
            isUpdateBlood = false;
        }
    }

    public override void OnResponse(string data)
    {
        float attack = float.Parse(data);
        hp -= attack;
        isUpdateBlood = true;
    }
}
