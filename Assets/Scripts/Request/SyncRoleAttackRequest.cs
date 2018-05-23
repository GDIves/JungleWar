using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Common;
using UnityEngine;

public class SyncRoleAttackRequest : BaseRequest
{
    public PlayerHealth CurrentPlayerHealth { get; set; }

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.SyncRoleAttack;
        base.Awake();
    }

    public void SendRequest(float attack)
    {
        base.SendRequest(attack.ToString());
    }

    public override void OnResponse(string data)
    {
        float attack = float.Parse(data);
        CurrentPlayerHealth.TakeAttack(attack);
    }
}
