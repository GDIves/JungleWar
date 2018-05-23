using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using Common;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class LoginPanel : BasePanel
{
    private InputField usernameInput;
    private InputField passwordInput;
    private LoginRequest loginRequest;

    void Start()
    {
        loginRequest = GetComponent<LoginRequest>();
        usernameInput = transform.Find("Username/InputField").GetComponent<InputField>();
        passwordInput = transform.Find("Password/InputField").GetComponent<InputField>();
    }

    public override void OnEnter()
    {
        base.OnEnter();      
        gameObject.SetActive(true);
        transform.localPosition = new Vector3(600f, transform.localPosition.y, transform.localPosition.z);
        transform.localScale = Vector3.zero;
        transform.DOLocalMoveX(0f, 0.5f, false);
        transform.DOScale(1f, 0.5f);
    }

    public override void OnPause()
    {
        base.OnPause();
        transform.DOScale(0f, 0.5f);
        transform.DOLocalMoveX(600f, 0.5f, false).OnComplete(() => gameObject.SetActive(false));
        usernameInput.text = "";
        passwordInput.text = "";
    }

    public override void OnResume()
    {
        base.OnResume();
        gameObject.SetActive(true);
        transform.localPosition = new Vector3(600f, transform.localPosition.y, transform.localPosition.z);
        transform.localScale = Vector3.zero;
        transform.DOLocalMoveX(0f, 0.5f, false);
        transform.DOScale(1f, 0.5f);
    }

    public override void OnExit()
    {
        base.OnExit();
        transform.DOScale(0f, 0.5f);
        transform.DOLocalMoveX(600f, 0.5f, false).OnComplete(() => gameObject.SetActive(false));
        usernameInput.text = "";
        passwordInput.text = "";
    }

    public void OnLoginResponse(ReturnCode returnCode)
    {
        if (returnCode == ReturnCode.Success)
        {
            uiManager.PushPanelSync(UIPanelType.RoomList);
        }
        else
        {
            uiManager.ShowMessageSync("用户名或密码错误，登录失败！请重试！");
        }
    }

    public void OnLoginClick()
    {
        PlayClickSound();
        string msg = "";
        if (string.IsNullOrEmpty(usernameInput.text))
        {
            msg += "用户名不能为空 ";
        }
        if (string.IsNullOrEmpty(passwordInput.text))
        {
            msg += "密码不能为空 ";
        }
        if (!msg.Equals(""))
        {
            uiManager.ShowMessage(msg);
            return;
        }
        else
        {
            loginRequest.SendRequest(usernameInput.text, passwordInput.text);
        }
    }

    public void OnRegisterClick()
    {
        PlayClickSound();
        uiManager.PopPanel();
        uiManager.PushPanel(UIPanelType.Register);
    }

    public void OnCloseClick()
    {
        PlayClickSound();
        uiManager.PopPanel();
    }
}
