using System;
using System.Collections;
using System.Collections.Generic;
/*using System.IO;
using UnityEngine.Networking;*/
using UnityEngine;

public class APPManager : MonoBehaviour
{
    public AudioSource audioSource;
    public GameObject videoPlayerObject;
    public static APPManager instance;
    public GameObject thisPanel;
    public GameObject disclaimerPanel;
    public GameObject videoPanel;
    public GameObject mainMenuPanel;

    public GameObject background;
    private bool _isPlay = false;
    private bool _isSkip = false;

    private void Awake()
    {
        instance = this;
        DontDestroyOnLoad(this.gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
        GetIsPlay();
        if (!PlayerPrefs.HasKey("IsSkip"))
        {
            PlayerPrefs.SetInt("IsSkip", 0);
            Load();
        }
        else
        {
            Load();
        }
    }

    public void SetSkip(){
        PlayerPrefs.SetInt("IsSkip", 1);
    }

    private void Load()
    {
        if (PlayerPrefs.GetInt("IsSkip") == 0)
        {
            _isSkip = false;
        }
        else
        {
            _isSkip = true;
        }
    }

    public void StartApp()
    {
        if (_isSkip)
        {
            videoPanel.SetActive(true);
            thisPanel.SetActive(false);
            videoPlayerObject.GetComponent<VideController>().SetVideo();
        }
        else
        {
            disclaimerPanel.SetActive(true);
            thisPanel.SetActive(false);
        }
    }

    public void GetIsPlay()
    {
        if (ARManager.instance != null)
        {
            _isPlay = ARManager.instance.IsPlay;
            if (_isPlay)
            {
                mainMenuPanel.SetActive(true);
                thisPanel.SetActive(false);
                background.SetActive(true);
                /*GameObject.Find("SoundManager").GetComponent<SoundManager>().SetPlay();*/
            }
        }
    }
}
