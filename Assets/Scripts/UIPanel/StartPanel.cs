using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class StartPanel : BasePanel
{
    public override void OnEnter()
    {
        base.OnEnter();
        gameObject.SetActive(true);       
    }

    public override void OnPause()
    {
        base.OnPause();
        transform.DOLocalMoveX(800f, 0.5f, false);
    }

    public override void OnResume()
    {
        base.OnResume();
        transform.localScale = Vector3.zero;
        transform.DOScale(1f, 0.5f);
        transform.DOLocalMoveX(0f, 0.5f, false);
    }

    public override void OnExit()
    {
        base.OnExit();
        
    }

    public void OnStartClick()
    {
        PlayClickSound();
        uiManager.PushPanel(UIPanelType.Login);
    }

    public void OnExitClick()
    {
        Application.Quit();
    }
}
