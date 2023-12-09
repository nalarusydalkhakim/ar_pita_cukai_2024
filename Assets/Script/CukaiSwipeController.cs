using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine;
using UnityEngine.UI;

public class CukaiSwipeController : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public int initiateSkip = 0;
    private Vector3 _initialPosition;
    private float _rate = 0.3f;

    public GameObject cukaiDetailObject;
    public GameObject scrollbar;
    float scrollPos = 0;
    float[] pos;
    int position = 0;


    void Start()
    {
        InitiateCard(initiateSkip);
    }

    public void OnDrag(PointerEventData eventData)
    {
        transform.localPosition = new Vector2(transform.localPosition.x + (eventData.delta.x * _rate), transform.localPosition.y);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        _initialPosition = transform.localPosition;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (transform.localPosition.x < _initialPosition.x)
        {
            if (position < pos.Length - 1)
            {
                position++;
                scrollPos = pos[position];
                cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
            }
        }
        else
        {
            if (position > 0)
            {
                position--;
                scrollPos = pos[position];
                cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
            }
        }
    }

    public void InitiateCard(int skip = 0)
    {
        pos = new float[transform.childCount - skip];
        // active child
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform child = transform.GetChild(i);
            child.gameObject.SetActive(true);
            // Debug.Log("active object");
        }
        // nonactive child
        Debug.Log(transform.childCount - skip);
        Debug.Log(transform.childCount);
        for (int i = transform.childCount - 1; i > transform.childCount - skip - 1; i--)
        {
            Transform child = transform.GetChild(i);
            child.gameObject.SetActive(false);
        }

        position = 0;
        scrollPos = pos[position];
        cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
    }

    // Update is called once per frame
    void Update()
    {
        // if (pos == null)
        // {
        //     InitiateCard(0);
        // }
        float distance = 1f / (pos.Length - 1);
        for (int i = 0; i < pos.Length; i++)
        {
            pos[i] = distance * i;
        }

        if (Input.GetMouseButton(0))
        {
            scrollPos = scrollbar.GetComponent<Scrollbar>().value;
        }
        else
        {
            for (int i = 0; i < pos.Length; i++)
            {
                if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
                {
                    scrollbar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollbar.GetComponent<Scrollbar>().value, pos[i], 0.5f);
                }
            }
        }
    }
}
