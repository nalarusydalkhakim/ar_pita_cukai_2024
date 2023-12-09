using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundController : MonoBehaviour
{
    public AudioSource audioSource;
    public Image soundImage;
    public Sprite soundOffSprite;
    public Sprite soundOnSprite;

    public void SetOnOffSound()
    {
        if (PlayerPrefs.GetInt("IsOn") == 1)
        {
            audioSource.Pause();
            soundImage.sprite = soundOffSprite;
            PlayerPrefs.SetInt("IsOn", 0);
        }
        else
        {
            audioSource.Play();
            soundImage.sprite = soundOnSprite;
            PlayerPrefs.SetInt("IsOn", 1);
        }
    }

    public void SetPlay()
    {
        audioSource.Play();
        soundImage.sprite = soundOnSprite;
        PlayerPrefs.SetInt("IsOn", 1);
    }

    public void SetOn()
    {
        if (PlayerPrefs.GetInt("IsOn") == 0)
        {
            audioSource.Play();
            soundImage.sprite = soundOnSprite;
            PlayerPrefs.SetInt("IsOn", 1);
        }
    }
    public void SetOff()
    {
        if (PlayerPrefs.GetInt("IsOn") == 1)
        {
            audioSource.Pause();
            soundImage.sprite = soundOnSprite;
            PlayerPrefs.SetInt("IsOn", 0);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        preLoad();
        
    }

    public void preLoad()
    {
        if (!PlayerPrefs.HasKey("IsOn"))
        {
            PlayerPrefs.SetInt("IsOn", 1);
            Load();
            Debug.Log(PlayerPrefs.GetInt("IsOn"));
        }
        else
        {
            Load();
        }
    }

    private void Load()
    {
        if (PlayerPrefs.GetInt("IsOn") == 0)
        {
            audioSource.Pause();
            soundImage.sprite = soundOffSprite;
        }
        else
        {
            audioSource.Play();
            soundImage.sprite = soundOnSprite;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
