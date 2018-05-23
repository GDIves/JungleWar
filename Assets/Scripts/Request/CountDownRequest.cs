﻿using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class CountDownRequest : BaseRequest
{
    private GamePanel gamePanel;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.CountDown;
        gamePanel = GetComponent<GamePanel>();
        base.Awake();
    }

    public override void OnResponse(string data)
    {
        int time = int.Parse(data);
        gamePanel.CountDownSync(time);
    }
}
