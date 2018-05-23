using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;

public class ShowRoomRequest : BaseRequest
{
    private RoomListPanel roomListPanel;

    public override void Awake()
    {
        requestCode = RequestCode.Room;
        actionCode = ActionCode.ShowRoom;
        roomListPanel = GetComponent<RoomListPanel>();
        base.Awake();
    }

    public override void SendRequest()
    {
        base.SendRequest("ShowRoom");
    }

    public override void OnResponse(string data)
    {
        List<UserData> userList = new List<UserData>();
        if (!data.Equals("0"))
        {
            string[] roomList = data.Split('/');
            foreach (var room in roomList)
            {
                string[] userData = room.Split(',');
                UserData user = new UserData(int.Parse(userData[0]), userData[1], int.Parse(userData[2]),
                    int.Parse(userData[3]));
                userList.Add(user);
            }
        }
        roomListPanel.LoadRoomItemSync(userList);
    }
}
