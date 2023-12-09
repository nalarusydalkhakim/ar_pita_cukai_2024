using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerController : MonoBehaviour
{
    public float timeRemaining;
    public bool timerIsRunning = false;
    public Text buttonText;
    public GameObject[] playVideoButton;

    private void Start()
    {
        // Starts the timer automatically
        timerIsRunning = true;
        gameObject.GetComponent<Button>().enabled = false;

        setVideoButton(false);
        
    }
    void Update()
    {
        if (timerIsRunning)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                buttonText.text = "Skip Video in " + Mathf.RoundToInt(timeRemaining);
            }
            else
            {
                Debug.Log("Time has run out!");
                buttonText.text = "Skip Video";
                gameObject.GetComponent<Button>().enabled = true;
                setVideoButton(true);
                timeRemaining = 0;
                timerIsRunning = false;
            }
        }
    }

    private void setVideoButton(bool thisCondition){
        for (int i = 0; i < playVideoButton.Length; i++)
        {
            playVideoButton[i].SetActive(thisCondition);
        }
    }
}
