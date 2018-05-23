using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class BaseRequest : MonoBehaviour
{
    protected RequestCode requestCode = RequestCode.None;
    protected ActionCode actionCode = ActionCode.None;
    protected GameFacade facade;

    public virtual void Awake()
    {
        GameFacade.Instance.AddRequest(actionCode, this);
        facade = GameFacade.Instance;
    }

    public virtual void OnDestroy()
    {
        GameFacade.Instance.RemoveRequest(actionCode);
    }

    protected void SendRequest(string data)
    {
        GameFacade.Instance.SendRequest(requestCode, actionCode, data);
    }

    public virtual void SendRequest() { }
    public virtual void OnResponse(string data) { }
}
