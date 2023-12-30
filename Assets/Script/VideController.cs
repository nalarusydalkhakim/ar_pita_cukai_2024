using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideController : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    public VideoClip videoToPlay;
    public RawImage image;
    public RawImage image2;
    public Image playPauseImage1;
    public Image playPauseImage2;
    public Sprite playSprite;
    public Sprite pauseSprite;

    public GameObject fullScreenObject;
    bool isFullScreen = false;

    public void PlayPauseVideo()
    {
        if (videoPlayer.isPlaying)
        {
            videoPlayer.Pause();
            playPauseImage1.sprite = playSprite;
            playPauseImage2.sprite = playSprite;
        }
        else
        {
            videoPlayer.Play();
            playPauseImage1.sprite = pauseSprite;
            playPauseImage2.sprite = pauseSprite;
        }
    }


    public void FullScreen()
    {
        if (isFullScreen)
        {
            fullScreenObject.SetActive(false);
            isFullScreen = false;
        }
        else
        {
            fullScreenObject.SetActive(true);
            isFullScreen = true;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(PlayVideo());
    }

    public void SetVideo()
    {
        StartCoroutine(PlayVideo());
    }

    IEnumerator PlayVideo()
    {
        videoPlayer.clip = videoToPlay;
        videoPlayer.Prepare();
        WaitForSeconds waitForSeconds = new WaitForSeconds(2);
        while (!videoPlayer.isPrepared)
        {
            yield return waitForSeconds;
            break;
            //yield return null;
        }
        image.texture = videoPlayer.texture;
        image2.texture = videoPlayer.texture;
        videoPlayer.Play();

    }

    public void forwardVideo(float time = 5.0f)
    {
        if (videoPlayer.time < videoPlayer.clip.length - time)
        {
            videoPlayer.time += time;

        }
    }
    
    public void backwardVideo(float time = 5.0f)
    {
        if (videoPlayer.time > 0f)
        {
            videoPlayer.time -= time;

        }
    }
    // Update is called once per frame
    void Update()
    {
        if (videoPlayer.isPlaying)
        {

            playPauseImage1.sprite = pauseSprite;
            playPauseImage2.sprite = pauseSprite;
        }
        else
        {
            playPauseImage1.sprite = playSprite;
            playPauseImage2.sprite = playSprite;
        }
    }
}
