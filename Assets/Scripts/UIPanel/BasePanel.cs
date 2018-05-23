using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BasePanel : MonoBehaviour
{
    protected UIManager uiManager;
    protected GameFacade facade;

    public UIManager UIManager
    {
        set { uiManager = value; }
    }

    public GameFacade Facade
    {
        set { facade = value; }
        get { return facade; }
    }

    protected void PlayClickSound()
    {
        facade.PlaySoundAudio(AudioManager.SoundButtonClick);
    }

    public virtual void OnEnter()
    {
        
    }

    public virtual void OnPause()
    {
        
    }

    public virtual void OnResume()
    {
        
    }

    public virtual void OnExit()
    {
        
    }

    public virtual void Init()
    {
        
    }
}
