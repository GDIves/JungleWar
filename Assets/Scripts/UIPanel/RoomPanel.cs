using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Security.Cryptography.X509Certificates;
using Assets.Scripts.Model;
using Common;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class RoomPanel : BasePanel
{
    private Transform bluePanel;
    private Transform redPanel;
    private Text blueUsername;
    private Text blueTotalcount;
    private Text blueWincount;
    private Text redUsername;
    private Text redTotalcount;
    private Text redTotal;
    private Text redWincount;
    private Text redWin;
    private Transform startButton;
    private Transform leaveButton;
    private UserData blueUserData = null;
    private UserData redUserData = null;
    private LeaveRoomRequest leaveRoomRequest;
    private StartGameRequest startGameRequest;
    private bool isPopPanel = false;

    public override void Init()
    {
        if (bluePanel == null)
            bluePanel = transform.Find("BluePanel");
        if (redPanel == null)
            redPanel = transform.Find("RedPanel");
        if (blueUsername == null)
            blueUsername = transform.Find("BluePanel/Username").GetComponent<Text>();
        if (blueTotalcount == null)
            blueTotalcount = transform.Find("BluePanel/Totalcount/Count").GetComponent<Text>();
        if (blueWincount == null)
            blueWincount = transform.Find("BluePanel/Wincount/Count").GetComponent<Text>();
        if (redUsername == null)
            redUsername = transform.Find("RedPanel/Username").GetComponent<Text>();
        if (redTotalcount == null)
            redTotalcount = transform.Find("RedPanel/Totalcount/Count").GetComponent<Text>();
        if (redTotal == null)
            redTotal = transform.Find("RedPanel/Totalcount").GetComponent<Text>();
        if (redWincount == null)
            redWincount = transform.Find("RedPanel/Wincount/Count").GetComponent<Text>();
        if (redWin == null)
            redWin = transform.Find("RedPanel/Wincount").GetComponent<Text>();
        if (startButton == null)
            startButton = transform.Find("StartButton");
        if (leaveButton == null)
            leaveButton = transform.Find("LeaveButton");
        if (leaveRoomRequest == null)
            leaveRoomRequest = GetComponent<LeaveRoomRequest>();
        if (startGameRequest == null)
            startGameRequest = GetComponent<StartGameRequest>();
    }

    public override void OnEnter()
    {
        Init();
        gameObject.SetActive(true);
        startButton.localScale = Vector3.zero;
        startButton.DOScale(1f, 0.5f);
        leaveButton.localScale = Vector3.zero;
        leaveButton.DOScale(1f, 0.5f);
        bluePanel.localPosition = new Vector3(-600f, bluePanel.localPosition.y, bluePanel.localPosition.z);
        bluePanel.DOLocalMoveX(-130f, 0.5f, false);
        redPanel.localPosition = new Vector3(600f, redPanel.localPosition.y, redPanel.localPosition.z);
        redPanel.DOLocalMoveX(130f, 0.5f, false);
    }

    public override void OnPause()
    {
        startButton.DOScale(0f, 0.5f);
        leaveButton.DOScale(0f, 0.5f);
        bluePanel.DOLocalMoveX(-600f, 0.5f, false);
        redPanel.DOLocalMoveX(600f, 0.5f, false).OnComplete(()=>gameObject.SetActive(false));
    }

    public override void OnResume()
    {
        gameObject.SetActive(true);
        bluePanel.localScale = Vector3.zero;
        bluePanel.DOScale(1f, 0.5f);
        leaveButton.localScale = Vector3.zero;
        leaveButton.DOScale(1f, 0.5f);
        bluePanel.localPosition = new Vector3(-600f, bluePanel.localPosition.y, bluePanel.localPosition.z);
        bluePanel.DOLocalMoveX(-130f, 0.5f, false);
        redPanel.localPosition = new Vector3(600f, redPanel.localPosition.y, redPanel.localPosition.z);
        redPanel.DOLocalMoveX(130f, 0.5f, false);
    }

    public override void OnExit()
    {
        startButton.DOScale(0f, 0.5f);
        leaveButton.DOScale(0f, 0.5f);
        bluePanel.DOLocalMoveX(-600f, 0.5f, false);
        redPanel.DOLocalMoveX(600f, 0.5f, false).OnComplete(() => gameObject.SetActive(false));
    }

    public void OnStartClick()
    {
        PlayClickSound();
        startGameRequest.SendRequest();
    }

    public void StartGameResponse(ReturnCode returnCode)
    {
        if (returnCode == ReturnCode.Success)
        {
            uiManager.PushPanelSync(UIPanelType.Game);
        }
        else if (returnCode == ReturnCode.NotFound)
        {
            uiManager.ShowMessageSync("请等待玩家加入");
        }
        else
        {
            uiManager.ShowMessageSync("只有房主可以开始游戏");
        }
    }

    public void OnLeaveClick()
    {
        PlayClickSound();
        leaveRoomRequest.SendRequest();
    }

    public void LeaveRoomResponse()
    {
        isPopPanel = true;
    }

    void Update()
    {
        if (blueUserData != null && redUserData == null)
        {
            SetBlueInfo(blueUserData.Username, blueUserData.Totalcount, blueUserData.Wincount);
            InitRedInfo();
            blueUserData = null;
        }
        else if (blueUserData != null && redUserData != null)
        {
            SetRoomInfo(blueUserData, redUserData);
            blueUserData = null;
            redUserData = null;
        }
        if (isPopPanel)
        {
            uiManager.PopPanel();
            isPopPanel = false;
        }  
    }

    public void SetBlueInfoSync()
    {
        blueUserData = facade.GetUserData();
    }

    public void SetRoomInfoSync(UserData blueUserData, UserData redUserData)
    {
        this.blueUserData = blueUserData;
        this.redUserData = redUserData;
    }

    public void SetRoomInfo(UserData blueUserData, UserData redUserData)
    {
        SetBlueInfo(blueUserData.Username,blueUserData.Totalcount,blueUserData.Wincount);
        SetRedInfo(redUserData.Username, redUserData.Totalcount, redUserData.Wincount);
    }

    private void SetBlueInfo(string username, int totalcount, int wincount)
    {
        blueUsername.text = username;
        blueTotalcount.text = totalcount.ToString();
        blueWincount.text = wincount.ToString();
    }

    private void SetRedInfo(string username, int totalcount, int wincount)
    {
        redUsername.text = username;
        redTotal.text = "总场数";
        redTotalcount.text = totalcount.ToString();
        redWin.text = "胜利";
        redWincount.text = wincount.ToString();
    }

    private void InitRedInfo()
    {
        redUsername.text = "";
        redTotal.text = "等待玩家加入...";
        redTotalcount.text = "";
        redWin.text = "";
        redWincount.text = "";
    }
}
