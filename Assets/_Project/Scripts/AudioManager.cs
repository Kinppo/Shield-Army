using System;
using UnityEngine;

//using Lofelt.NiceVibrations;

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance { get; protected set; }
    public AudioSource source;
    public AudioClip click;
    public AudioClip gemCollect;
    public AudioClip kill;
    public AudioClip upgrade;
    [HideInInspector] public bool isHeavyVibration;
    private float timePlaying;

    void Awake()
    {
        Instance = this;
    }

    private void Update()
    {
        if (source.isPlaying)
            timePlaying += Time.deltaTime;
    }

    public void Vibrate()
    {
        var freq = 0.4f;
        if (isHeavyVibration)
        {
            isHeavyVibration = false;
            freq = 0.9f;
        }
        //HapticPatterns.PlayEmphasis(freq, 0.0f); #8AC8FF
    }

    public void PlaySound(AudioClip clip)
    {
        if (source.clip != null && timePlaying < source.clip.length) return;
        source.clip = clip;
        source.Play();
    }
}