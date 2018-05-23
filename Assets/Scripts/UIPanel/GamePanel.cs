using System.Collections;
using System.Collections.Generic;
using Common;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class GamePanel : BasePanel
{
    private Text timerText;
    private int time = -1;
    private bool isStart = false;
    private bool isGameOver = false;

    private Transform victoryTrans;
    private Transform defeatTrans;
    private GameObject quitButton;
    private QuitBattleRequest quitBattleRequest;

    void Update()
    {
        if (time > -1)
        {
            CountDown(time);
            time = -1;
        }
        if (isStart)
        {
            facade.StartGame();
            isStart = false;
        }
    }

    public override void Init()
    {
        if (timerText == null)
            timerText = transform.Find("Timer").GetComponent<Text>();
        if (victoryTrans == null)
            victoryTrans = transform.Find("Victory");
        if (defeatTrans == null)
            defeatTrans = transform.Find("Defeat");
        if (quitButton == null)
            quitButton = transform.Find("QuitButton").gameObject;
        if (quitBattleRequest == null)
            quitBattleRequest = GetComponent<QuitBattleRequest>();
    }

    public override void OnEnter()
    {
        gameObject.SetActive(true);
        Init();
        isStart = true;
    }

    public override void OnExit()
    {
        victoryTrans.gameObject.SetActive(false);
        defeatTrans.gameObject.SetActive(false);
        gameObject.SetActive(false);
    }

    public void OnQuitClick()
    {
        if (isGameOver)
        {
            uiManager.PopPanel();
            uiManager.PopPanel();
            facade.GameOver();
            isGameOver = false;
        }
        else
        {
            quitBattleRequest.SendRequest();
        }       
    }

    public void OnQuitResponse()
    {
        uiManager.PopPanel();
        uiManager.PopPanel();
        facade.GameOver();
    }

    public void CountDownSync(int time)
    {
        this.time = time;
    }

    private void CountDown(int time)
    {
        timerText.gameObject.SetActive(true);
        timerText.text = time.ToString();
        timerText.transform.localScale = Vector3.one;
        timerText.color = new Color(timerText.color.r, timerText.color.g, timerText.color.b, 1f);
        timerText.transform.DOScale(2, 0.3f).SetDelay(0.3f);
        timerText.DOFade(0, 0.3f).SetDelay(0.3f).OnComplete(()=>timerText.gameObject.SetActive(false));
        facade.PlaySoundAudio(AudioManager.SoundTimer);
    }

    public void OnGameOverResponse(ReturnCode returnCode)
    {
        if (returnCode == ReturnCode.Success)
        {
            isGameOver = true;
            GameFacade.Instance.Victory();
            victoryTrans.gameObject.SetActive(true);
            victoryTrans.localScale = Vector3.zero;
            victoryTrans.DOScale(1f, 0.5f);
        }
        else
        {
            isGameOver = true;
            GameFacade.Instance.Defeat();
            defeatTrans.gameObject.SetActive(true);
            defeatTrans.localScale = Vector3.zero;
            defeatTrans.DOScale(1f, 0.5f);
        }
    }
}
