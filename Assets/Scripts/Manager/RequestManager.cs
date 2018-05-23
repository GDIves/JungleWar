using System;
using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class RequestManager : BaseManager 
{
    public RequestManager(GameFacade facade) : base(facade) { }

    private Dictionary<ActionCode, BaseRequest> requests = new Dictionary<ActionCode, BaseRequest>();

    public void AddRequest(ActionCode actionCode, BaseRequest request)
    {
        requests.Add(actionCode, request);
    }

    public void RemoveRequest(ActionCode actionCode)
    {
        requests.Remove(actionCode);
    }

    public void HandleResponse(ActionCode actionCode, string data)
    {
        BaseRequest request = requests.GetValue(actionCode);
        if (request != null)
            request.OnResponse(data);
        else
        {
            Debug.LogWarning("无法获取[" + actionCode + "]对应的Request");
        }
    }
}
