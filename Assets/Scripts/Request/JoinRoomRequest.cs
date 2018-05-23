using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;

public class JoinRoomRequest : BaseRequest
{
    private RoomListPanel roomListPanel;

    public override void Awake()
    {
        requestCode = RequestCode.Room;
        actionCode = ActionCode.JoinRoom;
        roomListPanel = GetComponent<RoomListPanel>();
        base.Awake();
    }

    public void SendRequest(int roomId)
    {
        base.SendRequest(roomId.ToString());
    }

    public override void OnResponse(string data)
    {
        string[] strs = data.Split('-');
        ReturnCode returnCode = (ReturnCode) int.Parse(strs[0]);
        UserData blueUserData = null;
        UserData redUserData = null;
        if (returnCode == ReturnCode.Success)
        {
            RoleType roleType = (RoleType)int.Parse(strs[1]);
            facade.SetCurrentRoleType(roleType);
            string[] userStrs = strs[2].Split('|');
            blueUserData = new UserData(userStrs[0]);
            redUserData = new UserData(userStrs[1]);
        }
        roomListPanel.OnJoinResponse(returnCode,blueUserData,redUserData);
    }
}
