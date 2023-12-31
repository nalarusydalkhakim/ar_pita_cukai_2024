using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwipeController : MonoBehaviour
{
    public GameObject scrollbar;
    public Text nameText;
    public Text descText;
    public string[] nameString;
    public string[] descString;
    float scrollPos = 0;
    float[] pos;
    int position = 0;

    // Start is called before the first frame update
    void Start()
    {
        // scrollPos = 0;
        // position = 0;
    }

    public void choose(int thisPos)
    {
        position = thisPos - 1;
        scrollPos = pos[position];
    }

    public void next()
    {
        if (position < pos.Length - 1)
        {
            position += 1;
            scrollPos = pos[position];
        }
    }
    public void prev()
    {
        if (position > 0)
        {
            position -= 1;
            scrollPos = pos[position];
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
                    scrollbar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollbar.GetComponent<Scrollbar>().value, pos[i], 0.15f);
                    if (nameText != null)
                    {
                        nameText.text = nameString[i];
                    }
                    if (descText != null)
                    {
                        descText.text = descString[i];
                    }
                }
            }
        }

        for (int i = 0; i < pos.Length; i++)
        {
            if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
            {
                transform.GetChild(i).localScale = Vector2.Lerp(transform.GetChild(i).localScale, new Vector2(1f, 1f), 0.1f);
                for (int a = 0; a < pos.Length; a++)
                {
                    if (a != i)
                    {
                        transform.GetChild(a).localScale = Vector2.Lerp(transform.GetChild(a).localScale, new Vector2(0.8f, 0.8f), 0.1f);
                    }
                }
            }
        }
    }
}
