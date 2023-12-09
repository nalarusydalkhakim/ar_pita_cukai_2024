using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ARSoundController : MonoBehaviour
{
    public AudioSource audioSource;
    public Image[] soundImage;
    public Sprite soundOffSprite;
    public Sprite soundOnSprite;
    private bool isSoundOn = false;

    public void SetOnOffSound()
    {
        if (isSoundOn)
        {
            audioSource.Pause();
            for (int i = 0; i < soundImage.Length; i++)
            {
                soundImage[i].sprite = soundOffSprite;
            }
            isSoundOn = false;
        }
        else
        {
            audioSource.Play();
            for (int i = 0; i < soundImage.Length; i++)
            {
                soundImage[i].sprite = soundOnSprite;
            }
            isSoundOn = true;
        }
    }

    public void SetOn()
    {
        audioSource.Play();
        for (int i = 0; i < soundImage.Length; i++)
        {
            soundImage[i].sprite = soundOnSprite;
        }
        isSoundOn = true;
    }

    public void SetOff()
    {
        audioSource.Pause();
        for (int i = 0; i < soundImage.Length; i++)
        {
            soundImage[i].sprite = soundOffSprite;
        }
        isSoundOn = false;
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
