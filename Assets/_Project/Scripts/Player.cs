using UnityEngine;

public class Player : Agent
{
    public static Player Instance { get; protected set; }

    private void Awake()
    {
        Instance = this;
    }
}