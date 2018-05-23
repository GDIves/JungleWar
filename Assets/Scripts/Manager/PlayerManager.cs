using System.Collections;
using System.Collections.Generic;
using Assets.Scripts.Model;
using Common;
using UnityEngine;
using UnityEngine.UI;

public class PlayerManager : BaseManager
{
    public PlayerManager(GameFacade facade) : base(facade) { }
    public RoleType CurrentRoleType { get; set; }
    public GameObject CurrentRole { get; set; }
    private GameObject remoteRole;
    private RoleData currentRoleData;
    private RoleData remoteRoleData;

    private UserData userData;
    private Dictionary<RoleType, RoleData> roleDatas = new Dictionary<RoleType, RoleData>();
    private Transform spawnPointBlue;
    private Transform spawnPointRed;
    private PlayerAttack playerAttack;
    private SyncRoleAttackRequest syncRoleAttackRequest;
    private GameOverRequest gameOverRequest;

    public UserData UserData
    {
        set { this.userData = value; }
        get { return this.userData; }
    }

    public override void OnInit()
    {
        spawnPointBlue = GameObject.Find("SpawnPoint_BLUE").transform;
        spawnPointRed = GameObject.Find("SpawnPoint_RED").transform;
        InitRoleDatas();
    }

    private void InitRoleDatas()
    {
        roleDatas.Add(RoleType.Blue, new RoleData(RoleType.Blue, "Prefabs/Hunter_BLUE", "Prefabs/Arrow_BLUE", spawnPointBlue));
        roleDatas.Add(RoleType.Red, new RoleData(RoleType.Red, "Prefabs/Hunter_RED", "Prefabs/Arrow_RED", spawnPointRed));
    }

    public void SpawnRole()//生成角色
    {
        foreach (var roleData in roleDatas.Values)
        {
            GameObject roleGo = GameObject.Instantiate(roleData.RolePrefab, roleData.SpawnPoint.position,
                Quaternion.identity);
            if (roleData.RoleType == CurrentRoleType)
            {
                CurrentRole = roleGo;
                currentRoleData = roleData;
            }
            else
            {
                remoteRole = roleGo;
                remoteRoleData = roleData;
            }
        }
    }

    public void SendAttack(float attack)
    {
        syncRoleAttackRequest.SendRequest(attack);
    }

    public void SendGameOver()
    {
        gameOverRequest.SendRequest();
    }

    public void AddRoleScript()//添加角色脚本
    {
        CurrentRole.AddComponent<PlayerMove>();
        playerAttack = CurrentRole.AddComponent<PlayerAttack>();
        playerAttack.arrowPrefab = currentRoleData.ArrowPrefab;
    }

    public void AddSyncRequest()
    {
        CurrentRole.AddComponent<SyncRoleMoveRequest>().SetCurrentPlayer(CurrentRole, remoteRole);
        SyncRoleShootRequest syncRoleShootRequest = CurrentRole.AddComponent<SyncRoleShootRequest>();
        syncRoleShootRequest.SetRemoteRole(remoteRoleData, remoteRole.GetComponent<Animator>());
        playerAttack.SyncRoleShootRequest = syncRoleShootRequest;
        syncRoleAttackRequest = CurrentRole.AddComponent<SyncRoleAttackRequest>();
        syncRoleAttackRequest.CurrentPlayerHealth = CurrentRole.GetComponent<PlayerHealth>();
        remoteRole.AddComponent<SyncRoleBloodRequest>();
        gameOverRequest = CurrentRole.AddComponent<GameOverRequest>();
    }

    public void Victory()
    {
        CurrentRole.GetComponent<PlayerMove>().enabled = false;
        CurrentRole.GetComponent<PlayerAttack>().enabled = false;
        remoteRole.GetComponent<Animator>().SetTrigger("Die");
    }

    public void Defeat()
    {
        CurrentRole.GetComponent<PlayerMove>().enabled = false;
        CurrentRole.GetComponent<PlayerAttack>().enabled = false;
        CurrentRole.GetComponent<Animator>().SetTrigger("Die");
    }

    public void GameOver()
    {
        GameObject.Destroy(CurrentRole);
        GameObject.Destroy(remoteRole);
    }
}
