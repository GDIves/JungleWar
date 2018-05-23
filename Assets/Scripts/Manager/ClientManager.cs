using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using Common;
using UnityEngine;

public class ClientManager : BaseManager
{
    private const string Ip = "110.65.97.224";
    private const int Port = 5719;
    private Socket clientSocket;

    public ClientManager(GameFacade facade) : base(facade)
    {
    }

    public override void OnInit()
    {
        base.OnInit();
        clientSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
        try
        {
            clientSocket.Connect(Ip, Port);
            clientSocket.BeginReceive(Message.Data, Message.StartIndex, Message.RemainSize, SocketFlags.None,
                ReceiveCallback, null);
        }
        catch (Exception e)
        {
            Debug.LogWarning("无法连接到服务器，请检查您的网络！" + e);
        }
    }

    private void ReceiveCallback(IAsyncResult ar)
    {
        try
        {
            if (clientSocket == null || clientSocket.Connected == false) return;
            int count = clientSocket.EndReceive(ar);
            Message.ReadMessage(count, DataCallback);
            clientSocket.BeginReceive(Message.Data, Message.StartIndex, Message.RemainSize, SocketFlags.None,
                ReceiveCallback, null);
        }
        catch (Exception e)
        {
            Debug.LogException(e);
        } 
    }

    private void DataCallback(ActionCode actionCode, string data)
    {
        facade.HandleResponse(actionCode, data);
    }

    public void SendRequest(RequestCode requestCode, ActionCode actionCode, string data)
    {
        byte[] dataBytes = Message.PackMessage(requestCode, actionCode, data);
        clientSocket.Send(dataBytes);
    }

    public override void OnDestroy()
    {
        base.OnDestroy();
        try
        {
            clientSocket.Close();
        }
        catch (Exception e)
        {
            Debug.LogWarning("无法关闭跟服务器的连接！" + e);
        }
    }
}
