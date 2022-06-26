using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public enum EnemyType
{
    Archer,
    Soldier
}

public class Enemy : Agent
{
    public static Enemy Instance { get; protected set; }
    public EnemyType enemyType;
    [HideInInspector] public Transform shootPoint;

    private void Awake()
    {
        Instance = this;
    }

    #region Editor

#if UNITY_EDITOR

    [CustomEditor(typeof(Enemy))]
    public class EnemyEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            var enemy = (Enemy) target;
            switch (enemy.enemyType)
            {
                case EnemyType.Archer:
                    enemy.shootPoint =
                        (Transform) EditorGUILayout.ObjectField("Arrow Point", enemy.shootPoint,
                            typeof(Transform));
                    break;
            }

            if (GUI.changed)
            {
                EditorUtility.SetDirty(enemy);
            }
        }
    }
#endif

    #endregion
}