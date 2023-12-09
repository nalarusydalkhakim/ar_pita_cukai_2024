using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TnC : MonoBehaviour
{
    public GameObject buttonObject;

    public Sprite disableSprite;
    public Sprite enableSprite;
    private bool isAgree = false;

    public void SetIsAgree()
    {
        if (isAgree)
        {
            isAgree = false;
            buttonObject.GetComponent<Button>().enabled = false;
            buttonObject.GetComponent<Image>().sprite = disableSprite;
        }
        else
        {
            isAgree = true;
            buttonObject.GetComponent<Button>().enabled = true;
            buttonObject.GetComponent<Image>().sprite = enableSprite;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        buttonObject.GetComponent<Image>().sprite = disableSprite;

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Save()
    {
        PlayerPrefs.SetInt("IsSkip", 1);
    }
}
