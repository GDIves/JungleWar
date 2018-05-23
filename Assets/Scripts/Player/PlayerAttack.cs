using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttack : MonoBehaviour
{
    public GameObject arrowPrefab;

    private Animator playerAnimator;
    private Transform leftHandTrans;
    private Vector3 shootDir;

    public SyncRoleShootRequest SyncRoleShootRequest { get; set; }

	void Start ()
	{
	    playerAnimator = GetComponent<Animator>();
	    leftHandTrans = transform.Find("Bip001/Bip001 Pelvis/Bip001 Spine/Bip001 Neck/Bip001 L Clavicle/Bip001 L UpperArm/Bip001 L Forearm/Bip001 L Hand");
	}
	
	void FixedUpdate () 
    {
	    if (playerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Grounded"))
	    {
	        if (Input.GetMouseButtonDown(0))
	        {
	            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
	            RaycastHit hit;
	            if (Physics.Raycast(ray, out hit))
	            {
	                Vector3 targetPoint = hit.point;
                    targetPoint.y = transform.position.y;
                    shootDir = targetPoint - transform.position;
                    transform.rotation = Quaternion.LookRotation(shootDir);
                    //给服务器端发送射击请求
	                SyncRoleShootRequest.SendRequest(leftHandTrans.position, shootDir);
                    playerAnimator.SetTrigger("Attack");
	                Invoke("Shoot", 0.7f);
	            }
	        }
	    }
	}

    private void Shoot()
    {
        GameFacade.Instance.PlaySoundAudio(AudioManager.SoundArrowShoot);
        GameObject arrowGo = Instantiate(arrowPrefab, leftHandTrans.position, Quaternion.LookRotation(shootDir));
        arrowGo.GetComponent<Arrow>().IsCurrent = true;
    }
}
