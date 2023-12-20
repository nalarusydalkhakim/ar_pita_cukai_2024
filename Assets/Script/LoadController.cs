using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadController : MonoBehaviour
{
    public static LoadController Instance;

    [SerializeField] private GameObject loaderCanvas;

    void Awake() {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }else
        {
            Destroy(gameObject);
        }
    }

    public async void LoadScene(string sceneName){
        AsyncOperation scene = SceneManager.LoadSceneAsync(sceneName);

        scene.allowSceneActivation = false;
        loaderCanvas.SetActive(true);
        
        // do
        // {
        //     await Task.Delay(100);
        // } while (scene.progress < 0.9f);

        await Task.Delay(1000);
        scene.allowSceneActivation = true;
        await Task.Delay(1000);
        loaderCanvas.SetActive(false);

    }
}
