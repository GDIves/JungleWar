using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MessagePanel : BasePanel
{
    private Text text;
    private string message = null;

    void Start()
    {
        text = GetComponent<Text>();
    }

    void Update()
    {
        if (message != null)
        {
            ShowMessage(message);
            message = null;
        }
    }
    public void ShowMessageSync(string msg)
    {
        message = msg;
    }

    public override void OnEnter()
    {
        base.OnEnter();
        uiManager.MessagePanel = this;
    }

    public void ShowMessage(string msg)
    {
        transform.SetAsLastSibling();
        facade.PlaySoundAudio(AudioManager.SoundAlert);
        text.CrossFadeAlpha(1f, 0.2f, false);
        text.text = msg;
        Invoke("HideMessage", 1f);
    }

    private void HideMessage()
    {
        text.CrossFadeAlpha(0f, 1f, false);
    }
}
