using UnityEngine.Audio;
using System;
using UnityEngine;

public class AudioManager : MonoBehaviour {

    public Sound[] sounds;
    bool isMute;

    public static AudioManager instance;

	void Awake () {
        //Die nächsten 10 Zeilen brauche ich sehr wahrscheinlich nicht.
        if (instance == null) instance = this;
        else
        {
            Destroy(gameObject);
            return;
        }

        DontDestroyOnLoad(gameObject);
        //Bis hier
		foreach(Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;
            s.source.volume = s.volume;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop;
        }
	}
	
    void Start()
    {
        Play("MainMenu");
    }

	public void lowerPitch(string name) {
		Sound s = Array.Find(sounds, sound => sound.name == name);
		if (s == null) return;

		s.source.pitch = 0.75f;
	}	
	public void normalPitch(string name) {
		Sound s = Array.Find(sounds, sound => sound.name == name);
		if (s == null) return;

		s.source.pitch = 1f;
	}
	public void higherPitch(string name) {
		Sound s = Array.Find(sounds, sound => sound.name == name);
		if (s == null) return;

		s.source.pitch = 0.5f;
	}

	public void Play(string name) {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null) return;

        s.source.Play();
	}

    public void stopSound(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null) return;
        s.source.volume = 0;
    }

    public void rightVolume(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null) return;
        s.source.volume = 1;
    }

    public void Mute()
    {
        isMute = !isMute;
        AudioListener.volume = isMute ? 0 : 1;
    }
}
