using System.Collections;
using System.Collections.Generic;
using System.Security.Policy;
using Assets.Scripts.Model;
using Common;
using UnityEngine;

public class GameFacade : MonoBehaviour
{
    private UIManager uiManager;
    private CameraManager cameraManager;
    private AudioManager audioManager;
    private PlayerManager playerManager;
    private RequestManager requestManager;
    private ClientManager clientManager;

    private static GameFacade instance;
    public static GameFacade Instance { get { return instance;} }

    void Awake()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
            return;
        }
        instance = this;
    }

	void Start ()
	{
	    InitManager();
	}
	
	void Update () 
    {
        UpdateManager();
	}

    private void InitManager()
    {
        uiManager = new UIManager(this);
        cameraManager = new CameraManager(this);
        audioManager = new AudioManager(this);
        playerManager = new PlayerManager(this);
        requestManager = new RequestManager(this);
        clientManager = new ClientManager(this);

        uiManager.OnInit();
        cameraManager.OnInit();
        audioManager.OnInit();
        playerManager.OnInit();
        requestManager.OnInit();
        clientManager.OnInit();
    }

    private void UpdateManager()
    {
        uiManager.Update();
        cameraManager.Update();
        audioManager.Update();
        playerManager.Update();
        requestManager.Update();
        clientManager.Update();
    }

    private void DestroyManager()
    {
        uiManager.OnDestroy();
        cameraManager.OnDestroy();
        audioManager.OnDestroy();
        playerManager.OnDestroy();
        requestManager.OnDestroy();
        clientManager.OnDestroy();
    }

    private void OnDestroy()
    {
        DestroyManager();
    }

    public void AddRequest(ActionCode actionCode, BaseRequest request)
    {
        requestManager.AddRequest(actionCode, request);
    }

    public void RemoveRequest(ActionCode actionCode)
    {
        requestManager.RemoveRequest(actionCode);
    }

    public void HandleResponse(ActionCode actionCode, string data)
    {
        requestManager.HandleResponse(actionCode, data);
    }

    public void ShowMessage(string msg)
    {
        uiManager.ShowMessage(msg);
    }

    public void SendRequest(RequestCode requestCode, ActionCode actionCode, string data)
    {
        clientManager.SendRequest(requestCode, actionCode, data);
    }

    public void PlayBgAudio(string soundName)
    {
        audioManager.PlayBgAudio(soundName);
    }

    public void PlaySoundAudio(string soundName)
    {
        audioManager.PlaySoundAudio(soundName);
    }

    public void SetUserData(UserData userData)
    {
        playerManager.UserData = userData;
    }

    public UserData GetUserData()
    {
        return playerManager.UserData;
    }

    public void SetCurrentRoleType(RoleType roleType)
    {
        playerManager.CurrentRoleType = roleType;
    }

    public void StartGame()
    {
        playerManager.SpawnRole();
        cameraManager.CameraFollow(playerManager.CurrentRole.transform);
    }

    public void AddRoleScript()
    {
        playerManager.AddRoleScript();
        playerManager.AddSyncRequest();
    }

    public void SendAttack(float attack)
    {
        playerManager.SendAttack(attack);
    }

    public void SendGameOver()
    {
        playerManager.SendGameOver();
    }

    public void Victory()
    {
        playerManager.Victory();
    }

    public void Defeat()
    {
        playerManager.Defeat();
    }

    public void GameOver()
    {
        playerManager.GameOver();
        cameraManager.CameraRoam();
    }
}
