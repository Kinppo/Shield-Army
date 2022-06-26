using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public static InputManager Instance { get; protected set; }
    public Camera cam;
  

    void Awake()
    {
        Instance = this;
    }

    void Update()
    {
        if (GameManager.gameState is not (GameState.Play)) return;
        CheckClickHoldEvent();
        CheckClickUpEvent();
    }
    

    private void CheckClickHoldEvent()
    {
        if (!Input.GetMouseButton(0)) return;
        GameController.Instance.MoveArmy();
        
    }

    private void CheckClickUpEvent()
    {
        if (!Input.GetMouseButtonUp(0)) return;
        GameController.Instance.StopArmy();
    }
}