using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : BaseManager 
{
    public AudioManager(GameFacade facade) : base(facade){}

    public const string SoundAlert = "Alert";
    public const string SoundArrowShoot = "ArrowShoot";
    public const string SoundBgfast = "Bg(fast)";
    public const string SoundBgmoderate = "Bg(moderate)";
    public const string SoundButtonClick = "ButtonClick";
    public const string SoundMiss = "Miss";
    public const string SoundShootPerson = "ShootPerson";
    public const string SoundTimer = "Timer";

    private AudioSource bgAudioSource;
    private AudioSource soundAudioSource;

    public override void OnInit()
    {
        GameObject audioManagerGo = new GameObject("AudioManager(GameObject)");
        bgAudioSource = audioManagerGo.AddComponent<AudioSource>();
        soundAudioSource = audioManagerGo.AddComponent<AudioSource>();
        PlayBgAudio(SoundBgmoderate);
    }

    public void PlayBgAudio(string soundName)
    {
        PlayAudio(bgAudioSource, LoadSound(soundName), 0.5f, true);
    }

    public void PlaySoundAudio(string soundName)
    {
        PlayAudio(soundAudioSource, LoadSound(soundName), 1f);
    }

    private void PlayAudio(AudioSource audioSource, AudioClip clip, float volume, bool loop = false)
    {
        audioSource.clip = clip;
        audioSource.volume = volume;
        audioSource.loop = loop;
        audioSource.Play();
    }

    private AudioClip LoadSound(string soundName)
    {
        return Resources.Load<AudioClip>("Sounds/" + soundName);
    }
}
