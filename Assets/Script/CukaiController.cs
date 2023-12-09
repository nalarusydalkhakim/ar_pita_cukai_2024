using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CukaiController : MonoBehaviour
{
    public Image[] cukaiImage;
    public Sprite[] defaultSprite;
    public Sprite[] variantSprite;
    public Image uvImage;
    public Sprite[] uvSprite;
    bool isVariant = false;
    int _position;

    //button
    public GameObject[] hoverImage;

    // animation
    public Animator colorPickerAnimator;
    public Animator colorButtonAnimator;
    public bool isCollorButtonOpened;

    // Start is called before the first frame update
    void Start()
    {
        _position = 0;
        SetImage(_position);
    }

    public void chooseImage(int position)
    {
        SetImage(position);
        _position = position;
        SetDefaultButton();
        hoverImage[position].SetActive(true);
    }

    public void changeVariant()
    {
        Debug.Log("test");
        if (isVariant)
        {
            isVariant = false;
            SetImage(_position);
        }
        else
        {
            isVariant=true;
            SetImage(_position);
        }
    }

    public void SetDefaultButton()
    {
        for(int i = 0; i < hoverImage.Length; i++)
        {
            hoverImage[i].SetActive(false);
        }
    }
    public void SetImage(int position)
    {
        for(int i = 0; i < cukaiImage.Length; i++)
        {
            if (isVariant)
            {
                cukaiImage[i].sprite = variantSprite[position];
            }
            else
            {
                cukaiImage[i].sprite = defaultSprite[position];
            }

            uvImage.sprite = uvSprite[position];
            Debug.Log(position);
        }
    }

    public void collorButton(){
        if (isCollorButtonOpened)
        {
            colorButtonAnimator.Play("close_button");
            colorPickerAnimator.Play("close_color_picker");
            isCollorButtonOpened = false;
        }else{
            colorButtonAnimator.Play("open_button");
            colorPickerAnimator.Play("color_picker");
            isCollorButtonOpened = true;
        }
    }
}
