using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour
{
    private Image image;
    private Sprite sprite;

    public AudioSource buttonSoundEffect;

    // Object Handler
    public void showObject(GameObject targetObject){
        targetObject.SetActive(true);
    }

    public void hideObject(GameObject targerObject){
        targerObject.SetActive(false);
    }

    public void openUrl(string thisUrl){
        Application.OpenURL(thisUrl);
    }

    // Image Handler
    public void setImage(Image thisImage){
        image = thisImage;
    }
    
    public void setSprite(Sprite thisSprite){
        sprite = thisSprite;
        setSpriteToImage();
    }

    private void setSpriteToImage(){
        image.sprite = sprite;
    }

    public void openScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void AppExit()
    {
        Application.Quit();
    }

    public void playButtonSoundEffect(){
        buttonSoundEffect.Play();
    }

}
