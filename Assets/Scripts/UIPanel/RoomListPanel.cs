using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class RoomListPanel : BasePanel
{
    private RectTransform userDetailPanel;
    private RectTransform roomListPanel;
    private Text userNameText;
    private Text totalCountText;
    private Text winCountText;
    private RectTransform layout;
    private GameObject roomItem;
    private float layoutHeight = 0f;
    private ShowRoomRequest showRoomRequest;
    private CreateRoomRequest createRoomRequest;
    private JoinRoomRequest joinRoomRequest;
    private List<UserData> userList = null;
    private UserData blueUserData = null;
    private UserData redUserData = null;

    void Update()
    {
        if (userList != null)
        {
            LoadRoomItem(userList);
            userList = null;
        }
        if (blueUserData != null && redUserData != null)
        {
            RoomPanel roomPanel = uiManager.PushPanel(UIPanelType.Room) as RoomPanel;
            roomPanel.SetRoomInfo(blueUserData, redUserData);
            blueUserData = null;
            redUserData = null;
        }
    }

    public override void Init()
    {
        if (userDetailPanel == null)
            userDetailPanel = transform.Find("UserDetail").GetComponent<RectTransform>();
        if (roomListPanel == null)
            roomListPanel = transform.Find("RoomList").GetComponent<RectTransform>();
        if (userNameText == null)
            userNameText = transform.Find("UserDetail/Username").GetComponent<Text>();
        if (totalCountText == null)
            totalCountText = transform.Find("UserDetail/Totalcount/Count").GetComponent<Text>();
        if (winCountText == null)
            winCountText = transform.Find("UserDetail/Wincount/Count").GetComponent<Text>();
        if (layout == null)
            layout = transform.Find("RoomList/ScrollRect/Layout").GetComponent<RectTransform>();
        if (roomItem == null)
            roomItem = Resources.Load("UIPanelPrefabs/RoomItem") as GameObject;
        if (showRoomRequest == null)
            showRoomRequest = GetComponent<ShowRoomRequest>();
        if (createRoomRequest == null)
            createRoomRequest = GetComponent<CreateRoomRequest>();
        if (joinRoomRequest == null)
            joinRoomRequest = GetComponent<JoinRoomRequest>();
    }

    public override void OnEnter()
    {
        base.OnEnter();
        gameObject.SetActive(true);
        InvokeRepeating("AutoRefresh", 1f, 3f);
        Init();
        SetUserRecord();
        showRoomRequest.SendRequest();
        userDetailPanel.localPosition = new Vector3(-600f, userDetailPanel.localPosition.y, userDetailPanel.localPosition.z);
        roomListPanel.localPosition = new Vector3(700f, roomListPanel.localPosition.y, roomListPanel.localPosition.z);
        userDetailPanel.DOLocalMoveX(-220f, 0.5f, false);
        roomListPanel.DOLocalMoveX(87f, 0.5f, false);
    }

    public void SetUserRecord()
    {
        UserData userData = facade.GetUserData();
        userNameText.text = userData.Username;
        totalCountText.text = userData.Totalcount.ToString();
        winCountText.text = userData.Wincount.ToString();
    }

    public override void OnPause()
    {
        base.OnPause();
        userDetailPanel.DOLocalMoveX(-600f, 0.5f, false);
        roomListPanel.DOLocalMoveX(700f, 0.5f, false).OnComplete(() => gameObject.SetActive(false));
    }

    public override void OnResume()
    {
        base.OnResume();
        gameObject.SetActive(true);
        InvokeRepeating("AutoRefresh", 1f, 3f);
        SetUserRecord();
        showRoomRequest.SendRequest();
        userDetailPanel.localPosition = new Vector3(-600f, userDetailPanel.localPosition.y, userDetailPanel.localPosition.z);
        roomListPanel.localPosition = new Vector3(700f, roomListPanel.localPosition.y, roomListPanel.localPosition.z);
        userDetailPanel.DOLocalMoveX(-220f, 0.5f, false);
        roomListPanel.DOLocalMoveX(87f, 0.5f, false);
    }

    public override void OnExit()
    {
        base.OnExit();
        userDetailPanel.DOLocalMoveX(-600f, 0.5f, false);
        roomListPanel.DOLocalMoveX(700f, 0.5f, false).OnComplete(() => gameObject.SetActive(false));
    }

    public void OnCloseClick()
    {
        PlayClickSound();
        uiManager.PopPanel();
    }

    public void OnCreateClick()
    {
        PlayClickSound();
        RoomPanel roomPanel = uiManager.PushPanel(UIPanelType.Room) as RoomPanel;
        createRoomRequest.RoomPanel = roomPanel;
        createRoomRequest.SendRequest();
    }

    public void OnRefreshClick()
    {
        PlayClickSound();
        showRoomRequest.SendRequest();
    }

    private void AutoRefresh()
    {
        showRoomRequest.SendRequest();
    }

    public void LoadRoomItemSync(List<UserData> userList)
    {
        this.userList = userList;
    }

    private void LoadRoomItem(List<UserData> userList)
    {
        ClearRoomItem();
        foreach (var user in userList)
        {
            GameObject roomItemGo = Instantiate(roomItem);
            roomItemGo.transform.SetParent(layout.transform);
            roomItemGo.GetComponent<RoomItem>().SetRoomInfo(user.Userid, user.Username, user.Totalcount, user.Wincount, this);
            layoutHeight += 85f;
            layout.sizeDelta = new Vector2(layout.sizeDelta.x, layoutHeight);
        }
    }

    private void ClearRoomItem()
    {
        foreach (var roomItem in layout.GetComponentsInChildren<RoomItem>())
        {
            roomItem.DestroyRoomItem();
        }
        layout.sizeDelta = new Vector2(layout.sizeDelta.x, 0f);
        layoutHeight = 0f;
    }

    public void OnJoinClick(int id)
    {
        joinRoomRequest.SendRequest(id);
    }

    public void OnJoinResponse(ReturnCode returnCode, UserData blueUserData, UserData redUserData)
    {
        switch (returnCode)
        {
            case ReturnCode.Fail:
                uiManager.ShowMessageSync("房间人数已满，无法加入");
                break;
            case ReturnCode.NotFound:
                uiManager.ShowMessageSync("房间不存在");
                break;
            case ReturnCode.Success:
                this.blueUserData = blueUserData;
                this.redUserData = redUserData;
                break;
        }
    }
}
