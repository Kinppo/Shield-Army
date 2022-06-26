using System.Collections.Generic;
using PathCreation;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public static GameController Instance { get; protected set; }
    public Transform camPoint;
    public LayerMask playerMask;
    public LayerMask enemyMask;
    public GameObject playerBlood;
    public GameObject enemyBlood;
    public Player playerPrefab;
    [HideInInspector] public List<Agent> players = new List<Agent>();
    [HideInInspector] public Transform playersParent;
    private int playerX, playerZ, enemyX, enemyZ;
    private Vector3 lastPlayerPos, lastEnemyPos;
    private float space = 0.55f;
    private float dstTravelled;
    [HideInInspector] public bool isFighting;
    private List<Vector3> armyPositions = new List<Vector3>();

    void Awake()
    {
        Instance = this;
        playersParent = new GameObject("Players Parent").transform;
    }

    public void SpawnPlayers()
    {
        for (int i = 0; i < GameManager.Instance.soldiersNumber; i++)
        {
            lastPlayerPos = GetPlayerCoordinates();
            var pos = lastPlayerPos;
            var obj = Instantiate(playerPrefab, pos, Quaternion.identity);
            obj.gameObject.transform.SetParent(playersParent.transform);
            players.Add(obj);
            armyPositions.Add(lastPlayerPos);
        }
    }

    private Vector3 GetPlayerCoordinates()
    {
        var pos = new Vector3(-space * playerX, 0, space * playerZ);

        if (playerZ == 1)
            playerX = playerX > 0 ? playerX * -1 : (playerX * -1) + 1;

        playerZ = playerZ == 0 ? 1 : 0;

        return pos;
    }

    public void AddPlayer()
    {
        lastPlayerPos = GetPlayerCoordinates();
        var pos = lastPlayerPos;

        var obj = Instantiate(playerPrefab, pos, Quaternion.identity);
        obj.gameObject.transform.SetParent(playersParent.transform);
        players.Add(obj);

        obj.blastEffect.gameObject.SetActive(true);
        obj.blastEffect.Play();
    }

    public void PlayBlastEffect()
    {
        foreach (var p in players)
        {
            p.blastEffect.gameObject.SetActive(true);
            p.blastEffect.Play();
        }
    }

    public void MoveArmy()
    {
        if (isFighting) return;
        foreach (var p in players)
        {
            p.ChangeAnimation(AgentState.Run);
        }

        dstTravelled += GameManager.Instance.runSpeed * Time.deltaTime;

        playersParent.transform.position =
            GameManager.Instance.selectedLevel.path.path.GetPointAtDistance(dstTravelled, EndOfPathInstruction.Stop);
        playersParent.transform.rotation =
            GameManager.Instance.selectedLevel.path.path.GetRotationAtDistance(dstTravelled, EndOfPathInstruction.Stop);

        camPoint.transform.position =
            GameManager.Instance.selectedLevel.path.path.GetPointAtDistance(dstTravelled, EndOfPathInstruction.Stop);

        // camPoint.transform.rotation =
        //     GameManager.Instance.selectedLevel.path.path.GetRotationAtDistance(dstTravelled, EndOfPathInstruction.Stop);
    }

    public void StopArmy()
    {
        if (isFighting) return;

        foreach (var p in players)
        {
            p.ChangeAnimation(AgentState.Crouch);
        }
    }

    public void SetUpSoldiersAttack()
    {
        if (isFighting) return;

        isFighting = true;
        foreach (var p in players)
        {
            p.ChangeAnimation(AgentState.Attack);
        }
    }

    public void FinishAttacking()
    {
        isFighting = false;
        foreach (var p in players)
        {
            p.ChangeAnimation();
        }
    }

    public void AdjustSoldierPositions(Vector3 pos)
    {
        var index = armyPositions.IndexOf(pos);

        if (index < armyPositions.Count - 1)
        {
            if (players.Count >0 && players[^1] != null && Mathf.Abs(players[^1].transform.localPosition.x) > pos.x)
            {
                players[^1].nextPos = pos;
                players[^1].isLerping = true;
            }

            armyPositions.RemoveAt(armyPositions.Count - 1);
        }
    }

    public void SetUpWin()
    {
        foreach (var p in players)
        {
            p.ChangeAnimation(AgentState.Dance);
        }
    }
}