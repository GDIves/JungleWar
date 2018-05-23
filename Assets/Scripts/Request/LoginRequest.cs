using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;

public class LoginRequest : BaseRequest
{
    private LoginPanel loginPanel;

    public override void Awake()
    {
        requestCode = RequestCode.User;
	    actionCode = ActionCode.Login;
        loginPanel = GetComponent<LoginPanel>();
        base.Awake();
    }

    public void SendRequest(string username, string password)
    {
        string data = username + "," + password;
        base.SendRequest(data);
    }

    public override void OnResponse(string data)
    {
        string[] strs = data.Split(',');
        ReturnCode returnCode = (ReturnCode) int.Parse(strs[0]);
        if (returnCode == ReturnCode.Success)
        {
            UserData userData = new UserData(strs[1], int.Parse(strs[2]), int.Parse(strs[3]));
            facade.SetUserData(userData);
        }
        loginPanel.OnLoginResponse(returnCode);
    }
}
