using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class QuitBattleRequest : BaseRequest
{
    private GamePanel gamePanel;
    private bool isQuit = false;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.QuitBattle;
        gamePanel = GetComponent<GamePanel>();
        base.Awake();
    }

    void Update()
    {
        if (isQuit)
        {
            gamePanel.OnQuitResponse();
            isQuit = false;
        }
    }

    public override void SendRequest()
    {
        base.SendRequest("QuitBattle");
    }

    public override void OnResponse(string data)
    {
        isQuit = true;
    }
}
