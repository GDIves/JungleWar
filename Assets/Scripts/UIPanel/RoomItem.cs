using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;
using UnityEngine.UI;

public class RoomItem : BasePanel
{
    public Text userNameText;
    public Text totalCountText;
    public Text winCountText;

    private RoomListPanel roomListPanel;
    private int roomId;

    void Start()
    {
        facade = roomListPanel.Facade;
    }

    public int RoomID
    {
        get { return roomId; }
    }

    public void SetRoomInfo(int userid, string username, int totalCount, int winCount, RoomListPanel roomListPanel)
    {
        this.roomId = userid;
        userNameText.text = username;
        totalCountText.text = totalCount.ToString();
        winCountText.text = winCount.ToString();
        this.roomListPanel = roomListPanel;
    }

    public void OnJoinClick()
    {
        PlayClickSound();
        roomListPanel.OnJoinClick(roomId);
    }

    public void DestroyRoomItem()
    {
        Destroy(this.gameObject);
    }
}
