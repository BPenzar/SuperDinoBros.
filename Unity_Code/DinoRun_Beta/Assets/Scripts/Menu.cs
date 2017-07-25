using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;


public class Menu : MonoBehaviour {

	public Text highscoreText;

    //public NetworkManager manager;
    public NetworkManager manager;
    
    public Canvas multiPlayer;
    public Canvas mainMenu, level;
    public Canvas ready;

    public Button single, eiswelt, dschungel, wueste;
    public Button multi;

    //public Button options;
    public Button back, sound;
    public Button joinLobby, createLobby, readyButton;

    public Sprite OffSprite, OnSprite;
    bool isMute;
    enum whereInMenu {start, multi, lobby}; // Eventuell wieder raushauen.


    // Use this for initialization
    void Start () {
		highscoreText = highscoreText.GetComponent<Text> ();
		highscoreText.text = "Highscore: " + ((int)PlayerPrefs.GetFloat ("Highscore")).ToString ();

        multiPlayer = multiPlayer.GetComponent<Canvas>();
        manager = manager.GetComponent<NetworkManager>();
        ready = ready.GetComponent<Canvas>();
        mainMenu = mainMenu.GetComponent<Canvas>();

        // Für MainMenü
        single = single.GetComponent<Button>();
        eiswelt = eiswelt.GetComponent<Button>();
        wueste = wueste.GetComponent<Button>();
        dschungel = dschungel.GetComponent<Button>();
        multi = multi.GetComponent<Button>();
        sound = sound.GetComponent<Button>();
        //options = options.GetComponent<Button>();

        //Multiplayer
        joinLobby = joinLobby.GetComponent<Button>();
        createLobby = createLobby.GetComponent<Button>();
        readyButton = readyButton.GetComponent<Button>();

        //Für alle anderen
        back = back.GetComponent<Button>();

        mainMenu.enabled = true;
        multiPlayer.enabled = false;
        manager.enabled = false;
        ready.enabled = false;
        level.enabled = false;

    }

    public void singlePlay()
    {
        //Durch "Play" drücken wird das erste Level aufgerufen.
        level.enabled = true;
        mainMenu.enabled = false;
    }
    public void audioHandling()
    {
        FindObjectOfType<AudioManager>().stopSound("MainMenu");
        FindObjectOfType<AudioManager>().Play("InGame");
        FindObjectOfType<AudioManager>().rightVolume("InGame");
    }
    public void iceLevel()
	{
		FindObjectOfType<AudioManager> ().higherPitch("InGame");
		if ((int)PlayerPrefs.GetFloat ("Highscore") >= 1000) {
			audioHandling();	
			SceneManager.LoadScene ("Eiswelt");
		}
    }
    public void forestLevel()
	{
		FindObjectOfType<AudioManager> ().normalPitch("InGame");
        audioHandling();
        SceneManager.LoadScene("Dschungel");
    }
    public void desertLevel()
    {
		FindObjectOfType<AudioManager> ().lowerPitch("InGame");
		if ((int)PlayerPrefs.GetFloat ("Highscore") >= 500) {
			audioHandling();
			SceneManager.LoadScene ("Wueste");
		}
    }

    public void multiPress()
    {
        mainMenu.enabled = false;
        multiPlayer.enabled = true;

        
    }
    public void createlobby()
    {
        //manager.enabled = true;
        manager.StartHost();
        multiPlayer.enabled = false;
        ready.enabled = true;
    }
    public void joinlobby()
    {
        manager.StartClient();
        //manager.enabled = true;
        ready.enabled = true;   
        multiPlayer.enabled = false;
    }
    public void areYouReady()
    {
        ClientScene.Ready(manager.client.connection);

        if (ClientScene.localPlayers.Count == 0)
        {
            ClientScene.AddPlayer(0);
        }
    }
    public void startIt()
    {
        manager.StartServer();
    }

    public void backPress()
    {
        multiPlayer.enabled = false;
        mainMenu.enabled = true;
    }
    
    public void soundPress()
    {
        changeImage();
        Mute();
    }
    public void changeImage()
    {
        if (sound.image.sprite == OnSprite)
            sound.image.sprite = OffSprite;
        else
        {
            sound.image.sprite = OnSprite;
        }
    }
   
    public void Mute()
    {
        isMute = !isMute;
        AudioListener.volume = isMute ? 0 : 1;
        
    }
}
