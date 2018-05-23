using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class GameOverRequest : BaseRequest
{
    private GamePanel gamePanel;
    private bool isGameOver = false;
    private ReturnCode returnCode;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.GameOver;
        gamePanel = GameObject.Find("UI/GamePanel(Clone)").GetComponent<GamePanel>();
        base.Awake();
    }

    void Update()
    {
        if (isGameOver)
        {
            gamePanel.OnGameOverResponse(returnCode);
            isGameOver = false;
        }
    }

    public override void SendRequest()
    {
        base.SendRequest("GameOver");
    }

    public override void OnResponse(string data)
    {
        returnCode = (ReturnCode)int.Parse(data);
        isGameOver = true;
    }
}
