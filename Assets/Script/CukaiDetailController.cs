using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CukaiDetailController : MonoBehaviour
{
    public GameObject[] descObject;
    public string[] descString;
    public Text[] descText;
    public int initiateSkip = 0;
    private int position = 0;
    private int descLength;

    //move lerp
    public Vector2[] objectPosisiton;
    public bool isMove = false;

    private Vector2 initPosition;
    // Start is called before the first frame update
    void Start()
    {
        descLength = descObject.Length - initiateSkip;
        Initiate();
        // NonActiveCard();
        // ActiveCard();
    }

    public void Initiate()
    {
        position = 0;
        initPosition = transform.localPosition;
        NonActiveObject();
        descObject[position].SetActive(true);
        InitiateDesc();
    }

    public void InitiateDesc()
    {
        if (descText.Length == descString.Length)
        {
            for (int i = 0; i < descText.Length; i++)
            {
                descText[i].text = descString[i];
            }
        }
    }

    public void SetTarget(int thisTarget)
    {
        if (thisTarget >= 0 && thisTarget <= descObject.Length)
        {
            position = thisTarget;
            NonActiveObject();
            descObject[position].SetActive(true);
        }
    }
    public void NextObject()
    {
        if (position < descLength - 1)
        {
            position++;
            NonActiveObject();
            descObject[position].SetActive(true);
        }
    }
    public void PrevObject()
    {
        if (position > 0)
        {
            position--;
            NonActiveObject();
            descObject[position].SetActive(true);
        }
    }

    IEnumerator Move()
    {
        float time = 0;
        {
            time += Time.deltaTime;
            transform.localPosition = new Vector3(Mathf.SmoothStep(objectPosisiton[position].x, objectPosisiton[position + 1].x, time),
                                                    Mathf.SmoothStep(objectPosisiton[position].y, objectPosisiton[position + 1].y, time),
                                                    0);
        }
        yield return null;
    }

    void NonActiveObject()
    {
        for (int i = 0; i < descObject.Length; i++)
        {
            descObject[i].SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isMove)
        {
            transform.localPosition = Vector2.Lerp(transform.localPosition, objectPosisiton[position], Time.deltaTime * 3f);
        }
    }
}
