using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Common;
using UnityEngine;

public class SyncRoleMoveRequest : BaseRequest
{
    private GameObject remoteRole;
    private Animator remoteRoleAnim;
    private GameObject currentRole;
    private PlayerMove currentPlayerMove;

    private Vector3 remoteRolePos;
    private Vector3 remoteRoleRot;
    private float remoteForward;

    private bool isSync = false;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.SyncRoleMove;
        base.Awake();
    }

    void Start()
    {
        InvokeRepeating("SendSyncRequest", 3f, 1f/50);
    }

    void FixedUpdate()
    {
        if (isSync)
        {
            SyncRemoteRole();
            isSync = false;
        }
    }

    public void SetCurrentPlayer(GameObject currentRole, GameObject remoteRole)
    {
        this.remoteRole = remoteRole;
        this.remoteRoleAnim = remoteRole.GetComponent<Animator>();
        this.currentRole = currentRole;
        this.currentPlayerMove = currentRole.GetComponent<PlayerMove>();
    }

    private void SendRequest(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float forward)
    {
        string data = string.Format("{0},{1},{2}|{3},{4},{5}|{6}", posX, posY, posZ, rotX, rotY, rotZ, forward);
        base.SendRequest(data);
    }

    private void SendSyncRequest()
    {
        SendRequest(currentRole.transform.position.x, currentRole.transform.position.y, currentRole.transform.position.z,
            currentRole.transform.eulerAngles.x, currentRole.transform.eulerAngles.y,
            currentRole.transform.eulerAngles.z, currentPlayerMove.Forward);
    }

    private void SyncRemoteRole()
    {
        remoteRole.transform.position = remoteRolePos;
        remoteRole.transform.eulerAngles = remoteRoleRot;
        remoteRoleAnim.SetFloat("Forward", remoteForward);
    }

    public override void OnResponse(string data)
    {
        string[] strs = data.Split('|');
        remoteRolePos = ParseMoveData(strs[0]);
        remoteRoleRot = ParseMoveData(strs[1]);
        remoteForward = float.Parse(strs[2]);
        isSync = true;
    }

    private Vector3 ParseMoveData(string data)
    {
        string[] strs = data.Split(',');
        float x = float.Parse(strs[0]);
        float y = float.Parse(strs[1]);
        float z = float.Parse(strs[2]);
        return new Vector3(x, y, z);
    }
}
