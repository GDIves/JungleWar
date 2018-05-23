using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;

public class UpdateRoomRequest : BaseRequest
{
    private RoomPanel roomPanel;

    public override void Awake()
    {
        requestCode = RequestCode.Room;
        actionCode = ActionCode.UpdateRoom;
        roomPanel = GetComponent<RoomPanel>();
        base.Awake();
    }

    public override void OnResponse(string data)
    {
        UserData blueUserData = null;
        UserData redUserData = null;
        string[] userData = data.Split('|');
        blueUserData = new UserData(userData[0]);
        if (userData.Length > 1)
            redUserData = new UserData(userData[1]);
        roomPanel.SetRoomInfoSync(blueUserData,redUserData);
    }
}
