using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FishLibraryController : MonoBehaviour
{
    public GameObject[] fishObjects;
    public GameObject[] tooltipObjects;

    private bool isTooltipOpen = false;
    public Text titleText;
    public Text tagText;
    public Text descText;
    public string[] titleStrings;
    public string[] tagStrings;
    public string[] descStrings;

    public GameObject[] foodObjects;
    public GameObject[] threatObjects;

    public Text sizeText;
    public string[] sizeStrings;
    private int index = 0;

    public GameObject[] bottomTooltips;

    private bool isFoodOpen = false;
    private bool isThreatOpen = false;
    private bool isSizeOpen = false;

    public AudioSource audioSource;
    public AudioClip[] audioClips;

    private bool isAudioOn = false;

    public Image soundImage;

    public Sprite soundOffSprite;
    public Sprite soundOnSprite;

    public void setFishLibrary(int thisIndex)
    {
        index = thisIndex;
        hideFishObjects();
        fishObjects[index].SetActive(true);
        hideTooltipObjects();
        // tooltipObjects[index].SetActive(true);
        setText();
        setBottomInformation();
        PlayAudio();
    }

    public void HideShowTooltip()
    {
        if (isTooltipOpen)
        {
            tooltipObjects[index].SetActive(false);
            isTooltipOpen = false;
        }
        else
        {
            tooltipObjects[index].SetActive(true);
            isTooltipOpen = true;
        }
    }

    private void setBottomInformation()
    {
        hideFoodObjects();
        foodObjects[index].SetActive(true);
        hideThreatObjects();
        sizeText.text = sizeStrings[index];
    }

    private void hideThreatObjects()
    {
        for (int i = 0; i < threatObjects.Length; i++)
        {
            threatObjects[i].SetActive(false);
        }
    }

    private void hideFoodObjects()
    {
        for (int i = 0; i < foodObjects.Length; i++)
        {
            foodObjects[i].SetActive(false);
        }
    }

    private void setText()
    {
        titleText.text = titleStrings[index];
        tagText.text = tagStrings[index];
        descText.text = descStrings[index];
    }

    private void hideFishObjects()
    {
        for (int i = 0; i < fishObjects.Length; i++)
        {
            fishObjects[i].SetActive(false);
        }
    }
    private void hideTooltipObjects()
    {
        for (int i = 0; i < tooltipObjects.Length; i++)
        {
            tooltipObjects[i].SetActive(false);
        }
    }

    public void FoodTooltipHandler()
    {
        if (isFoodOpen)
        {
            bottomTooltips[0].SetActive(false);
            isFoodOpen = false;
        }
        else
        {
            hideBottomToltips();
            bottomTooltips[0].SetActive(true);
            isFoodOpen = true;
        }
    }
    public void ThreatTooltipHandler()
    {
        if (isThreatOpen)
        {
            bottomTooltips[1].SetActive(false);
            isThreatOpen = false;
        }
        else
        {
            hideBottomToltips();
            bottomTooltips[1].SetActive(true);
            isThreatOpen = true;
        }
    }
    public void SizeTooltipHandler()
    {
        if (isSizeOpen)
        {
            bottomTooltips[2].SetActive(false);
            isSizeOpen = false;
        }
        else
        {
            hideBottomToltips();
            bottomTooltips[2].SetActive(true);
            isSizeOpen = true;
        }
    }

    private void hideBottomToltips()
    {
        for (int i = 0; i < bottomTooltips.Length; i++)
        {
            isFoodOpen = false;
            isThreatOpen = false;
            isSizeOpen = false;
            bottomTooltips[i].SetActive(false);
        }
    }

    public void PlayAudio()
    {
        audioSource.clip = audioClips[index];
        audioSource.Play();
        soundImage.sprite = soundOnSprite;
        isAudioOn = true;
    }

    public void PauseAudio()
    {
        audioSource.Stop();
        soundImage.sprite = soundOffSprite;
        isAudioOn = false;
    }

    public void SetOnOffAudio()
    {
        if (isAudioOn)
        {
            PauseAudio();
        }
        else
        {
            PlayAudio();
        }
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
