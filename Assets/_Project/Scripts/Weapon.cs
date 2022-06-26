using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Weapon : MonoBehaviour
{
    public Rigidbody rb;
    [HideInInspector] public Vector3 archerPos;
    [HideInInspector] public float randX;
    [HideInInspector] public float randZ;
    private Vector3 targetPos;
    private float dist;
    private float nextZ;
    private float nextX;
    private float baseY;
    private float height;
    private bool isDestroyed;


    private void Update()
    {
        if (isDestroyed) return;

        targetPos = GameController.Instance.playersParent.transform.position + new Vector3(randX, 0, randZ);
        dist = targetPos.z - archerPos.z;

        nextZ = Mathf.MoveTowards(transform.position.z, targetPos.z, GameManager.Instance.arrowSpeed * Time.deltaTime);
        nextX = Mathf.MoveTowards(transform.position.x, targetPos.x, GameManager.Instance.arrowSpeed * Time.deltaTime);

        baseY = Mathf.Lerp(archerPos.y, targetPos.y, (nextZ - archerPos.z) / dist);
        height = 2 * (nextZ - archerPos.z) * (nextZ - targetPos.z) / (-0.25f * dist * dist);

        var movePos = new Vector3(nextX, baseY + height, nextZ);
        transform.rotation = LookAtTarget(movePos - transform.position);
        transform.position = movePos;
    }

    public static Quaternion LookAtTarget(Vector3 rotation)
    {
        return Quaternion.Euler(-Mathf.Atan2(rotation.y, rotation.z) * Mathf.Rad2Deg + 180, 0, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        if(isDestroyed) return;
        
        if (other.gameObject.layer == 11)
        {
            isDestroyed = true;
            Destroy(gameObject, 0.75f);
        }
        else if (other.gameObject.layer == 6)
        {
            var p = other.gameObject.GetComponent<Player>();

            if (p.agentState != AgentState.Crouch)
                StartCoroutine(p.DestroyAgent(0));
            else
                Destroy(gameObject);
        }
    }
}