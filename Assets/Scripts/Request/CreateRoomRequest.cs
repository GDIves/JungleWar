using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Common;

public class CreateRoomRequest : BaseRequest
{
    private RoomPanel roomPanel;

    public RoomPanel RoomPanel
    {
        set { roomPanel = value; }
    }

    public override void Awake()
    {
        requestCode = RequestCode.Room;
        actionCode = ActionCode.CreateRoom;
        base.Awake();
    }

    public override void SendRequest()
    {
        base.SendRequest("CreateRoom");
    }

    public override void OnResponse(string data)
    {
        string[] strs = data.Split('-');
        ReturnCode returnCode = (ReturnCode)int.Parse(strs[0]);
        RoleType roleType = (RoleType)int.Parse(strs[1]);
        if (returnCode == ReturnCode.Success)
        {
            roomPanel.SetBlueInfoSync();
            facade.SetCurrentRoleType(roleType);
        }
    }
}
