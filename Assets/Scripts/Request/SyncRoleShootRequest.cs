using System.Collections;
using System.Collections.Generic;
using Common;
using UnityEngine;

public class SyncRoleShootRequest : BaseRequest
{
    private RoleData remoteRoleData;
    private Animator remoteRoleAnim;
    private Vector3 remoteArrowPos;
    private Vector3 remoteArrowRot;
    private bool isShoot = false;

    public override void Awake()
    {
        requestCode = RequestCode.Game;
        actionCode = ActionCode.SyncRoleShoot;
        base.Awake();
    }

    void FixedUpdate()
    {
        if (isShoot)
        {
            remoteRoleAnim.SetTrigger("Attack");
            Invoke("RemoteShoot", 0.7f);
            isShoot = false;
        }
    }

    public void SetRemoteRole(RoleData remoteRoleData, Animator remoteRoleAnim)
    {
        this.remoteRoleData = remoteRoleData;
        this.remoteRoleAnim = remoteRoleAnim;
    }

    public void SendRequest(Vector3 pos, Vector3 rot)
    {
        string data = string.Format("{0},{1},{2}|{3},{4},{5}", pos.x, pos.y, pos.z, rot.x, rot.y, rot.z);
        base.SendRequest(data);
    }

    public override void OnResponse(string data)
    {
        string[] strs = data.Split('|');
        remoteArrowPos = ParseArrowData(strs[0]);
        remoteArrowRot = ParseArrowData(strs[1]);
        isShoot = true;
    }

    private void RemoteShoot()
    {
        GameObject arrowGo = Instantiate(remoteRoleData.ArrowPrefab, remoteArrowPos, Quaternion.LookRotation(remoteArrowRot));
        arrowGo.GetComponent<Arrow>().IsCurrent = false;
    }

    private Vector3 ParseArrowData(string data)
    {
        string[] strs = data.Split(',');
        float x = float.Parse(strs[0]);
        float y = float.Parse(strs[1]);
        float z = float.Parse(strs[2]);
        return new Vector3(x, y, z);
    }
}
