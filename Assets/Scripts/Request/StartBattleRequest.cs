using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class StartBattleRequest : BaseRequest
{
    private bool isStartBattle = false;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.StartBattle;
        base.Awake();
    }

    void Update()
    {
        if (isStartBattle)
        {
            facade.AddRoleScript();
            isStartBattle = false;
        }
    }

    public override void OnResponse(string data)
    {
        isStartBattle = true;
    }
}
