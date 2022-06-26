using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class Base : MonoBehaviour
{
    public Animator animator;
    public int power;
    private bool isDestroying;
    [HideInInspector] public int index;
    
    private void Update()
    {
        if (!isDestroying) DetectSoldiers();
    }

    private void DetectSoldiers()
    {
        var colls = new Collider[50];
        Physics.OverlapSphereNonAlloc(transform.position, 1.75f, colls,
            GameController.Instance.playerMask);

        foreach (var c in colls)
        {
            if (!isDestroying && c != null)
            {
                isDestroying = true;
                GameController.Instance.SetUpSoldiersAttack();
                StartCoroutine(DestroyBase());
            }
        }
    }

    private IEnumerator DestroyBase()
    {
        animator.SetTrigger("Hit");
        power -= index;
        UIManager.Instance.UpdateReward(index);

        if (power <= 0)
        {
            transform.DOScale(0, 0.9f).SetEase(Ease.InOutBack);
            GameController.Instance.FinishAttacking();
            GameManager.Instance.Win();
        }

        yield return new WaitForSeconds(0.9f);
        if (GameManager.gameState == GameState.Play) StartCoroutine(DestroyBase());
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, 1.75f);
    }
}