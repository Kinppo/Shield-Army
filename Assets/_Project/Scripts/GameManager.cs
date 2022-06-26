using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public enum GameState
{
    Start,
    Play,
    Upgrade,
    Lose,
    Win
}

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; protected set; }
    public static GameState gameState = GameState.Start;

    [Header("Parameters")] public float runSpeed;
    public float shootTime;
    public float arrowSpeed;
    public float archersRange;
    [HideInInspector] public int soldiersNumber;

    [Header("Prefabs")] public Weapon arrow;
    public ParticleSystem confetti;

    public List<Level> levels = new List<Level>();
    [HideInInspector] public Level selectedLevel;
    [HideInInspector] public int level, reward;
    [HideInInspector] public int tutorialIndex;
    private int isPlayed;

    void Awake()
    {
        Instance = this;
        level = PlayerPrefs.GetInt("level", 1);
        reward = PlayerPrefs.GetInt("reward", 0);
        soldiersNumber = PlayerPrefs.GetInt("soldiersNumber", 2);
        runSpeed = PlayerPrefs.GetFloat("runSpeed", 2.8f);
        isPlayed = PlayerPrefs.GetInt("isPlayed", 0);
        UIManager.Instance.SetPanel();
        LoadLevel();
        TinySauce.OnGameStarted(level.ToString());
    }

    public void Win()
    {
        gameState = GameState.Win;
        GameController.Instance.SetUpWin();
        confetti.Play();
        StartCoroutine(EnableWinPanel());
        isPlayed = 1;
        PlayerPrefs.SetInt("isPlayed", isPlayed);
        TinySauce.OnGameFinished(true, 1, level.ToString());
    }

    private IEnumerator EnableWinPanel()
    {
        yield return new WaitForSeconds(1.5f);
        UIManager.Instance.SetPanel(GameState.Win);
    }

    public void Lose()
    {
        UIManager.Instance.SetPanel(GameState.Lose);
        isPlayed = 1;
        PlayerPrefs.SetInt("isPlayed", isPlayed);
        TinySauce.OnGameFinished(false, 1, level.ToString());
    }

    public void Restart()
    {
        AudioManager.Instance.Vibrate();
        AudioManager.Instance.PlaySound(AudioManager.Instance.click);
        SceneManager.LoadScene(0);
    }

    public void Next()
    {
        AudioManager.Instance.Vibrate();
        AudioManager.Instance.PlaySound(AudioManager.Instance.click);
        level++;
        PlayerPrefs.SetInt("level", level);
        SceneManager.LoadScene(0);
        LoadLevel();
    }

    private void LoadLevel()
    {
        var l = level;
        if (l > levels.Count)
            l = Random.Range(2, levels.Count + 1);

        selectedLevel = levels[l - 1];
        selectedLevel.gameObject.SetActive(true);
        var power = (level * 10) + 10;
        selectedLevel.enemyBase.power = power;
        selectedLevel.enemyBase.index = power / 5;

        GameController.Instance.SpawnPlayers();
        if (selectedLevel.hasTutorial) LoadTutorial();

        if (isPlayed == 1) UIManager.Instance.SetPanel(GameState.Upgrade);
    }

    private static int SelectColor(int l)
    {
        var index = 0;
        if (l is > 3 and < 7)
            index = 1;
        else if (l is > 6 and < 9)
            index = 2;
        else if (l >= 9) index = 3;

        return index;
    }

    public void UpgradeArmy()
    {
        var nbr = soldiersNumber * 10 + 5;
        if (nbr > reward) return;
        soldiersNumber += 1;
        reward -= nbr;
        UIManager.Instance.SetUpgradePrices();
        PlayerPrefs.SetInt("soldiersNumber", soldiersNumber);
        PlayerPrefs.SetInt("reward", reward);
        AudioManager.Instance.PlaySound(AudioManager.Instance.upgrade);
        GameController.Instance.AddPlayer();
    }

    public void UpgradeSpeed()
    {
        var sp = (int) Mathf.Round(((runSpeed - 2.6f) * 100) + 5);
        if (sp > reward) return;
        runSpeed += 0.1f;
        reward -= sp;
        UIManager.Instance.SetUpgradePrices();
        PlayerPrefs.SetFloat("runSpeed", runSpeed);
        PlayerPrefs.SetInt("reward", reward);
        AudioManager.Instance.PlaySound(AudioManager.Instance.upgrade);
        GameController.Instance.PlayBlastEffect();
    }

    public void LoadTutorial()
    {
        var tuts = UIManager.Instance.tutorials;

        if (tutorialIndex < tuts.Count) UIManager.Instance.tutorials[tutorialIndex].SetActive(true);
        if (tutorialIndex != 0) UIManager.Instance.tutorials[tutorialIndex - 1].SetActive(false);
        tutorialIndex++;
    }

    public void StartGame()
    {
        UIManager.Instance.SetPanel(GameState.Play);
    }

    public void CloseUpgradePanel()
    {
        AudioManager.Instance.Vibrate();
        AudioManager.Instance.PlaySound(AudioManager.Instance.click);
        UIManager.Instance.SetPanel();
    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetInt("isPlayed", 0);
    }
}