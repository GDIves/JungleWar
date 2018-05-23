using System.Collections;
using System.Collections.Generic;
using Common;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class RegisterPanel : BasePanel 
{
    private InputField usernameInput;
    private InputField passwordInput;
    private InputField repasswordInput;
    private RegisterRequest registerRequest;

    void Start()
    {
        usernameInput = transform.Find("Username/InputField").GetComponent<InputField>();
        passwordInput = transform.Find("Password/InputField").GetComponent<InputField>();
        repasswordInput = transform.Find("RePassword/InputField").GetComponent<InputField>();
        registerRequest = GetComponent<RegisterRequest>();
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

    public override void OnExit()
    {
        base.OnExit();
        transform.DOScale(0f, 0.5f);
        transform.DOLocalMoveX(600f, 0.5f, false).OnComplete(() => gameObject.SetActive(false));
        usernameInput.text = "";
        passwordInput.text = "";
        repasswordInput.text = "";
    }

    public void OnRegisterClick()
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
        if (!string.IsNullOrEmpty(passwordInput.text) && !passwordInput.text.Equals(repasswordInput.text))
        {
            msg += "两次输入的密码不一致";
        }
        if (!msg.Equals(""))
        {
            uiManager.ShowMessage(msg);
            return;
        }
        else
        {
            registerRequest.SendRequest(usernameInput.text, passwordInput.text);
        }
    }

    public void OnRegisterResponse(ReturnCode returnCode)
    {
        if (returnCode == ReturnCode.Success)
        {
            uiManager.ShowMessageSync("注册成功！");
        }
        else
        {
            uiManager.ShowMessageSync("注册失败！用户名已存在！");
        }
    }

    public void OnCloseClick()
    {
        PlayClickSound();
        uiManager.PopPanel();
        uiManager.PushPanel(UIPanelType.Login);
    }
}
