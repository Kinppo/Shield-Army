using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using TMPro;
using UnityEditor;
using UnityEngine;
using Random = UnityEngine.Random;

public enum TroopType
{
    TowerArchers,
    GroundArchers,
    Soldiers
}

public class Troop : MonoBehaviour
{
    public TroopType troopType;
    [HideInInspector] public GameObject tower;
    [HideInInspector] public Transform towerParent;
    [HideInInspector] public List<ParticleSystem> puffs;
    [HideInInspector] public TextMeshProUGUI powerText;
    public List<Enemy> troops = new List<Enemy>();
    private bool isShooting, isDestroying, isAttacking;

    private void Start()
    {
        if (troopType == TroopType.Soldiers) powerText.text = troops.Count.ToString();
    }

    private void Update()
    {
        if (!isDestroying && troopType is TroopType.TowerArchers or TroopType.GroundArchers)
            DetectPlayerSoldiers();
        if (!isAttacking && troopType == TroopType.Soldiers)
            SoldiersDetect();
    }

    private IEnumerator LaunchArrows()
    {
        if (isShooting)
        {
            foreach (var t in troops)
            {
                t.animator.SetTrigger("Shoot");
                var arrow = Instantiate(GameManager.Instance.arrow, t.shootPoint.position,
                    GameManager.Instance.arrow.transform.rotation);

                arrow.archerPos = t.shootPoint.position;
                arrow.randX = Random.Range(-0.75f, 0.75f);
                arrow.randZ = Random.Range(-1f, 1f);
            }
        }

        yield return new WaitForSeconds(GameManager.Instance.shootTime);
        if (GameManager.gameState == GameState.Play) StartCoroutine(LaunchArrows());
    }

    private void DetectPlayerSoldiers()
    {
        var colls1 = new Collider[50];
        Physics.OverlapSphereNonAlloc(transform.position, GameManager.Instance.archersRange, colls1,
            GameController.Instance.playerMask);

        var colls2 = new Collider[50];
        Physics.OverlapSphereNonAlloc(transform.position, troopType == TroopType.TowerArchers ? 1.85f : 0.75f, colls2,
            GameController.Instance.playerMask);

        if (colls2.Any(c => c != null))
        {
            isShooting = false;
            isDestroying = true;

            if (troopType == TroopType.GroundArchers)
                StartCoroutine(KillArchers());
            else
                StartCoroutine(DestroyTower());

            GameController.Instance.SetUpSoldiersAttack();
            return;
        }

        foreach (var c in colls1)
        {
            if (!isShooting && c != null)
            {
                isShooting = true;
                StartCoroutine(LaunchArrows());
            }
        }
    }

    private void SoldiersDetect()
    {
        var colls = new Collider[50];
        Physics.OverlapSphereNonAlloc(transform.position, 1f, colls,
            GameController.Instance.playerMask);

        if (colls.All(c => c == null)) return;
        isAttacking = true;
        SetUpSoldiersAttack();
    }

    private IEnumerator DestroyTower()
    {
        towerParent.DOMove(towerParent.position + new Vector3(0, -0.85f, 0), 0.7f).SetEase(Ease.OutBounce);

        foreach (var p in puffs)
        {
            p.gameObject.SetActive(true);
            p.Play();
        }

        if (towerParent.position.y < -3.85f)
        {
            isDestroying = false;
            foreach (var t in troops)
            {
                Destroy(t.gameObject);
                Instantiate(GameController.Instance.enemyBlood, t.transform.position,
                    Quaternion.identity);
                AudioManager.Instance.PlaySound(AudioManager.Instance.kill);
            }

            troops.Clear();
            GameController.Instance.FinishAttacking();
            Destroy(gameObject);
        }

        yield return new WaitForSeconds(0.7f);
        StartCoroutine(DestroyTower());
    }

    private IEnumerator KillArchers()
    {
        yield return new WaitForSeconds(0.55f);

        foreach (var t in troops)
        {
            Destroy(t.gameObject);
            Instantiate(GameController.Instance.enemyBlood, t.transform.position,
                Quaternion.identity);
            AudioManager.Instance.PlaySound(AudioManager.Instance.kill);
        }

        troops.Clear();
        GameController.Instance.FinishAttacking();
        Destroy(gameObject);
    }

    private void SetUpSoldiersAttack()
    {
        GameController.Instance.SetUpSoldiersAttack();
        foreach (var t in troops)
        {
            t.ChangeAnimation(AgentState.Attack);
        }

        StartCoroutine(KillSoldiers());
    }

    private IEnumerator KillSoldiers()
    {
        yield return new WaitForSeconds(0.5f);

        if (GameManager.gameState != GameState.Play) yield break;

        if (troops.Count > 0)
        {
            Destroy(troops[0].gameObject);
            Instantiate(GameController.Instance.enemyBlood, troops[0].transform.position,
                Quaternion.identity);
            troops.RemoveAt(0);
            AudioManager.Instance.PlaySound(AudioManager.Instance.kill);
        }

        if (GameController.Instance.players.Count > 0)
        {
            StartCoroutine(GameController.Instance.players[0].DestroyAgent(0));
        }

        if (troops.Count == 0)
        {
            troops.Clear();
            GameController.Instance.FinishAttacking();
            Destroy(gameObject, 0.1f);
        }
        else StartCoroutine(KillSoldiers());
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, 15);
        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, 1.85f);
    }

    #region Editor

#if UNITY_EDITOR

    [CustomEditor(typeof(Troop))]
    public class TroopEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            var troop = (Troop) target;
            switch (troop.troopType)
            {
                case TroopType.TowerArchers:
                    troop.tower =
                        (GameObject) EditorGUILayout.ObjectField("Tower", troop.tower, typeof(GameObject));
                    troop.towerParent =
                        (Transform) EditorGUILayout.ObjectField("tower Parent", troop.towerParent, typeof(Transform));

                    var list = serializedObject.FindProperty("puffs");
                    EditorGUILayout.PropertyField(list, new GUIContent("Puffs"), true);
                    serializedObject.ApplyModifiedProperties();
                    break;

                case TroopType.Soldiers:
                    troop.powerText =
                        (TextMeshProUGUI) EditorGUILayout.ObjectField("Power Text", troop.powerText,
                            typeof(TextMeshProUGUI));
                    break;
            }

            if (GUI.changed)
            {
                EditorUtility.SetDirty(troop);
            }
        }
    }
#endif

    #endregion
}