using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class CameraManager : BaseManager
{
    private Animator cameraAnimator;
    private Transform cameraTrans;
    private FollowTarget followTarget;
    private Vector3 roamPosition;
    private Vector3 roamRotation;

    public CameraManager(GameFacade facade) : base(facade) { }

    public override void OnInit()
    {
        cameraTrans = Camera.main.transform;
        cameraAnimator = cameraTrans.GetComponent<Animator>();
        followTarget = cameraTrans.GetComponent<FollowTarget>();
    }

    public void CameraRoam()//漫游
    {
        followTarget.enabled = false;
        cameraTrans.DOMove(roamPosition, 1f);
        cameraTrans.DORotate(roamRotation, 1f).OnComplete(() => cameraAnimator.enabled = true);
    }

    public void CameraFollow(Transform target)//跟随
    {
        cameraAnimator.enabled = false;
        roamPosition = cameraTrans.position;
        roamRotation = cameraTrans.eulerAngles;
        followTarget.target = target;
        followTarget.enabled = true;
    }
}
