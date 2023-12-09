using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MateriController : MonoBehaviour , IDragHandler, IBeginDragHandler, IEndDragHandler
{
     private Vector3 _initialPosition;
    private float _rate = 0.3f;

    public GameObject scrollbar;
    float scrollPos = 0;
    float[] pos;
    int position;


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
            }
        }
        else
        {
            if (position > 0)
            {
                position--;
                scrollPos = pos[position];
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        pos = new float[transform.childCount];
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
