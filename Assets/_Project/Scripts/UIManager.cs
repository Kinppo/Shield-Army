using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using Unity.Mathematics;
using UnityEngine;
using System.Collections;

public class UIManager : MonoBehaviour
{
    public static UIManager Instance { get; protected set; }

    [Header("Panels")] [SerializeField] private GameObject startPanel;
    [SerializeField] private GameObject playPanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private GameObject upgradePanel;
    [Header("Texts")] public TextMeshProUGUI levelText;
    public TextMeshProUGUI rewardText;
    public TextMeshProUGUI rewardWinText;
    public TextMeshProUGUI armyPrice;
    public TextMeshProUGUI speedPrice;
    [Header("Tutorials")] public List<GameObject> tutorials;
    [Header("Others")] public Gem gemPrefab;
    public RectTransform gemIcon;
    private int levelReward;
    private bool rewardTextIsAnimating;

    private void Awake()
    {
        Instance = this;
    }

    void Start()
    {
        var l = GameManager.Instance.level;
        levelText.text = "LEVEL " + l;
        rewardText.text = GameManager.Instance.reward.ToString();
        rewardWinText.text = GameManager.Instance.reward.ToString();
        HidePanels();
    }

    public void SetPanel(GameState state = GameState.Start)
    {
        startPanel.SetActive(false);
        playPanel.SetActive(false);
        winPanel.SetActive(false);
        losePanel.SetActive(false);
        upgradePanel.SetActive(false);

        switch (state)
        {
            case GameState.Start:
                startPanel.SetActive(true);
                break;
            case GameState.Play:
                playPanel.SetActive(true);
                break;
            case GameState.Upgrade:
                upgradePanel.SetActive(true);
                SetUpgradePrices();
                break;
            case GameState.Win:
                winPanel.SetActive(true);
                SetUpgradePrices();
                StartCoroutine(HidePreviousScene());
                break;
            case GameState.Lose:
                losePanel.SetActive(true);
                StartCoroutine(HidePreviousScene());
                break;
        }

        GameManager.gameState = state;
    }

    public void UpdateReward(int r)
    {
        GameManager.Instance.reward += r;
        levelReward += r;
        PlayerPrefs.SetInt("reward", GameManager.Instance.reward);
        InstantiateGem();
        AudioManager.Instance.PlaySound(AudioManager.Instance.gemCollect);
    }

    private void InstantiateGem()
    {
        var basePos = GameManager.Instance.selectedLevel.enemyBase.transform
            .position;
        var gem = Instantiate(gemPrefab,
            basePos + new Vector3(0, 3f, 0), quaternion.identity);

        gem.transform.DOMove(basePos + new Vector3(0, 5.5f, 0), 0.7f)
            .OnComplete(() =>
            {
                gem.renderer.enabled = false;
                gem.effect.gameObject.SetActive(true);
                gem.effect.Play();
                Destroy(gem, 0.7f);
                gemIcon.DOScale(1.25f, 0.3f).OnComplete(() => { gemIcon.DOScale(1f, 0.3f); });
                rewardText.text = GameManager.Instance.reward.ToString();
            });
    }

    private void HidePanels()
    {
        winPanel.transform.position -= new Vector3(Screen.width, 0, 0);
        losePanel.transform.position -= new Vector3(Screen.width, 0, 0);
    }

    public void SetUpgradePrices()
    {
        rewardWinText.text = GameManager.Instance.reward.ToString();
        rewardText.text = GameManager.Instance.reward.ToString();
        var r = GameManager.Instance.reward;

        var sp = Mathf.Round(((GameManager.Instance.runSpeed - 2.6f) * 100) + 5);
        var ap = GameManager.Instance.soldiersNumber * 10 + 5;
        armyPrice.text = ap.ToString();
        speedPrice.text = sp.ToString();

        if (sp > r) speedPrice.color = Color.red;
        if (ap > r) armyPrice.color = Color.red;
    }

    private IEnumerator HidePreviousScene()
    {
        yield return new WaitForSeconds(1.3f);
        GameManager.Instance.selectedLevel.gameObject.SetActive(false);
    }
}