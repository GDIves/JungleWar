using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Common;
using UnityEngine;

public class Message
{
    private static byte[] data = new byte[1024];
    private static int startIndex = 0;

    public static byte[] Data
    {
        get { return data; }
    }

    public static int StartIndex
    {
        get { return startIndex; }
    }

    public static int RemainSize
    {
        get { return data.Length - startIndex; }
    }

    public static void ReadMessage(int amount, Action<ActionCode, string> dataCallback)
    {
        //更新startIndex
        startIndex += amount;
        while (true)
        {
            if (startIndex <= 4) return;
            //获取数据长度
            int count = BitConverter.ToInt32(data, 0);
            if (startIndex >= (count + 4))
            {
                ActionCode actionCode = (ActionCode)BitConverter.ToInt32(data, 4);
                //获取数据
                string msg = Encoding.UTF8.GetString(data, 8, count - 4);
                dataCallback(actionCode, msg);
                Array.Copy(data, count + 4, data, 0, startIndex - count - 4);
                startIndex -= (count + 4);
            }
            else
            {
                return;
            }
        }
    }

    public static byte[] PackMessage(RequestCode requestCode, ActionCode actionCode, string data)
    {
        byte[] requestCodeBytes = BitConverter.GetBytes((int)requestCode);
        byte[] actionCodeBytes = BitConverter.GetBytes((int)actionCode);
        byte[] dataBytes = Encoding.UTF8.GetBytes(data);
        int dataAmount = requestCodeBytes.Length + actionCodeBytes.Length + dataBytes.Length;
        byte[] dataAmountBytes = BitConverter.GetBytes(dataAmount);
        return dataAmountBytes.Concat(requestCodeBytes).Concat(actionCodeBytes).Concat(dataBytes).ToArray();
    }
}
