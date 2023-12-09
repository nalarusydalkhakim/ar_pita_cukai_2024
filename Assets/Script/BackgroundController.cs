using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class BackgroundController : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    public VideoClip videoToPlay;
    public RawImage image;
    
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(PlayVideo(2));
    }

    public void SetVideo(float _time = 2)
    {
        StartCoroutine(PlayVideo(_time));
    }

    IEnumerator PlayVideo(float _time)
    {
        videoPlayer.clip = videoToPlay;
        videoPlayer.Prepare();
        WaitForSeconds waitForSeconds = new WaitForSeconds(_time);
        while (!videoPlayer.isPrepared)
        {
            yield return waitForSeconds;
            break;
        }
        image.texture = videoPlayer.texture;
        videoPlayer.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (!videoPlayer.isPlaying)
        {
            StartCoroutine(PlayVideo(2));
        }
    }
}
