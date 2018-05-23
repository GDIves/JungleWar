using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Common;
using UnityEngine;

public class RoleData
{
    public RoleType RoleType { get; private set; }
    public GameObject RolePrefab { get; private set; }
    public GameObject ArrowPrefab { get; private set; }
    public Transform SpawnPoint { get; private set; }

    public RoleData(RoleType roleType, string rolePath, string arrowPath, Transform spawnTrans)
    {
        this.RoleType = roleType;
        this.RolePrefab = Resources.Load(rolePath) as GameObject;
        this.ArrowPrefab = Resources.Load(arrowPath) as GameObject;
        this.SpawnPoint = spawnTrans;
    }
}

