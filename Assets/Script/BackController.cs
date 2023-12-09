using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class BackController : MonoBehaviour
{
    // public GameObject showPanel;
    // public GameObject hidePanel;
    // public GameObject soundManager;
    public UnityEvent unityEvent;
    public string key;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                // THE WORD IS : "EXIT", "BACKANDSOUND" "BACK", "LOAD"
                // if (key == "EXIT")
                // {
                //     showPanel.SetActive(true);
                // }
                // else if (key == "BACKANDSOUND")
                // {
                //     showPanel.SetActive(true);
                //     hidePanel.SetActive(false);
                //     if (soundManager)
                //     {
                //         soundManager.GetComponent<SoundController>().SetOn();
                //     }
                // }
                // else if (key == "BACK")
                // {
                //     showPanel.SetActive(true);
                //     hidePanel.SetActive(false);
                // }
                // else if (key == "LOAD")
                // {
                //     SceneManager.LoadScene("AppScene");
                // }
                unityEvent.Invoke();
                return;
            }
        }
        else
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                unityEvent.Invoke();
                return;
            }
        }
    }
}
