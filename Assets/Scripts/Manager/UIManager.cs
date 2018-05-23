using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : BaseManager
{
    private UIPanelType panelTypeToPush = UIPanelType.None;

    public UIManager(GameFacade facade) : base(facade)
    {
        ParseUIPanelJson();
    }

    public override void OnInit()
    {
        base.OnInit();
        PushPanel(UIPanelType.Message);
        PushPanel(UIPanelType.Start);
    }

    public override void Update()
    {
        if (panelTypeToPush != UIPanelType.None)
        {
            PushPanel(panelTypeToPush);
            panelTypeToPush = UIPanelType.None;
        }
    }

    private Transform uiTrans;
    private Transform UITrans
    {
        get
        {
            if (uiTrans == null)
            {
                uiTrans = GameObject.Find("UI").transform;
            }
            return uiTrans;
        }
    }

    private Dictionary<UIPanelType, string> panelPaths;

    [Serializable]
    class UIPanelTypeJson
    {
        public List<UIPanelInfo> panelInfo;
    }

    private void ParseUIPanelJson()
    {
        panelPaths = new Dictionary<UIPanelType, string>();
        TextAsset panelJson = Resources.Load<TextAsset>("UIPanelJson");
        UIPanelTypeJson panelJsonObject = JsonUtility.FromJson<UIPanelTypeJson>(panelJson.text);

        foreach (UIPanelInfo info in panelJsonObject.panelInfo)
        {
            panelPaths.Add(info.panelType, info.path);
        }
    }

    private Dictionary<UIPanelType, BasePanel> panels;

    private BasePanel GetPanel(UIPanelType panelType)
    {
        if (panels == null)
        {
            panels = new Dictionary<UIPanelType, BasePanel>();
        }
        BasePanel basePanel = panels.GetValue(panelType);
        if (basePanel == null)
        {
            string path = panelPaths.GetValue(panelType);
            GameObject insPanel = GameObject.Instantiate(Resources.Load(path)) as GameObject;
            insPanel.GetComponent<BasePanel>().UIManager = this;
            insPanel.GetComponent<BasePanel>().Facade = facade;
            insPanel.transform.SetParent(UITrans, false);
            panels.Add(panelType, insPanel.GetComponent<BasePanel>());
            return insPanel.GetComponent<BasePanel>();
        }
        else
        {
            return basePanel;
        }
    }

    private Stack<BasePanel> panelsStack;

    public BasePanel PushPanel(UIPanelType panelType)
    {
        if(panelsStack==null)
            panelsStack = new Stack<BasePanel>();
        //若栈内有页面，则需要先暂停
        if (panelsStack.Count > 0)
        {
            panelsStack.Peek().OnPause();//栈顶页面暂停
        }
        BasePanel panel = GetPanel(panelType);
        panel.OnEnter();
        panelsStack.Push(panel);
        return panel;
    }

    public void PopPanel()
    {
        if (panelsStack == null)
            panelsStack = new Stack<BasePanel>();
        if (panelsStack.Count <= 0) return;
        panelsStack.Pop().OnExit();
        if (panelsStack.Count > 0)
        {
            panelsStack.Peek().OnResume();
        }
    }

    private MessagePanel messagePanel;

    public MessagePanel MessagePanel
    {
        set { messagePanel = value; }
    }

    public void ShowMessage(string msg)
    {
        messagePanel.ShowMessage(msg);
    }

    public void ShowMessageSync(string msg)
    {
        messagePanel.ShowMessageSync(msg);
    }

    public void PushPanelSync(UIPanelType panelType)
    {
        panelTypeToPush = panelType;
    }
}
