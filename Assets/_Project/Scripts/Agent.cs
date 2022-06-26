using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public enum AgentType
{
    Player,
    Enemy
}

public enum AgentState
{
    Idle,
    Run,
    Crouch,
    Attack,
    Dance
}

public class Agent : MonoBehaviour
{
    public static Agent Instance { get; protected set; }
    private static readonly int Blend1 = Animator.StringToHash("Blend 1");
    private static readonly int Blend2 = Animator.StringToHash("Blend 2");
    public AgentState agentState;
    public AgentType agentType;
    public Animator animator;
    public new Renderer renderer;
    public CapsuleCollider coll;
    public Rigidbody rb;
    public ParticleSystem blastEffect;
    private bool isAnimating;
    private float para1, para2;
    [HideInInspector] public Vector3 nextPos;
    [HideInInspector] public bool isLerping;

    private void Awake()
    {
        Instance = this;
    }

    private void Update()
    {
        if (isAnimating)
            SmoothAnimation();

        if (isLerping) AdjustPosition();
    }

    private void SmoothAnimation()
    {
        var blend1 = Mathf.Lerp(animator.GetFloat(Blend1), para1, 12 * Time.deltaTime);
        var blend2 = Mathf.Lerp(animator.GetFloat(Blend2), para2, 12 * Time.deltaTime);

        animator.SetFloat(Blend1, blend1);
        animator.SetFloat(Blend2, blend2);

        if ((blend1 - para1 == 0) && (blend2 - para2 == 0))
            isAnimating = false;
    }

    public void ChangeAnimation(AgentState state = AgentState.Idle)
    {
        if (agentState == state) return;

        switch (state)
        {
            case AgentState.Idle:
                para1 = 1;
                para2 = 1;
                break;
            case AgentState.Run:
                para1 = 1;
                para2 = -1;
                break;
            case
                AgentState.Crouch:
                para1 = -1;
                para2 = 1;
                break;
            case AgentState.Attack:
                para1 = -1;
                para2 = -1;
                break;
            case AgentState.Dance:
                para1 = 0;
                para2 = 0;
                break;
        }

        isAnimating = true;
        agentState = state;
    }


    public IEnumerator DestroyAgent(float time)
    {
        yield return new WaitForSeconds(time);

        var arr = new List<Agent>();
        arr = agentType == AgentType.Player ? GameController.Instance.players : arr;

        
        if (this != null)
        {
            Destroy(gameObject);
            Instantiate(
                agentType == AgentType.Player
                    ? GameController.Instance.playerBlood
                    : GameController.Instance.enemyBlood,
                transform.position + new Vector3(0, 0, 0),
                Quaternion.identity);
            arr.Remove(this);
            AudioManager.Instance.PlaySound(AudioManager.Instance.kill);
        }

        if (GameManager.gameState == GameState.Play && agentType == AgentType.Player && arr.Count <= 0)
        {
            GameManager.Instance.Lose();
            yield break;
        }

        if (agentType == AgentType.Player && this != null)
            GameController.Instance.AdjustSoldierPositions(transform.localPosition);
    }

    public void AdjustPosition()
    {
        transform.localPosition = Vector3.MoveTowards(transform.localPosition, nextPos, Time.deltaTime * 1.5f);

        if (Vector3.Distance(transform.localPosition, nextPos) < 0.001f)
            isLerping = false;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
    }
}