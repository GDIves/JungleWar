using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;

public class UpdateRecordRequest : BaseRequest 
{
	public override void Awake()
    {
        actionCode = ActionCode.UpdateRecord;
        base.Awake();
    }

    public override void OnResponse(string data)
    {
        string[] strs = data.Split(',');
        UserData userData = new UserData(strs[0], int.Parse(strs[1]), int.Parse(strs[2]));
        facade.SetUserData(userData);
    }
}
