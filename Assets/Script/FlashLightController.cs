using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using easyar;

public class FlashLightController : MonoBehaviour
{
    private CameraDevice camDevice = new CameraDevice();
    private bool flashStatus;
    // Start is called before the first frame update
    void Start()
    {
        flashStatus = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void TurnFlashlight()
    {
        try
        {
            if (flashStatus)
            {
                camDevice.setFlashTorchMode(false);
                flashStatus = false;
                ShowToast("TurnOff");
            }else{
                camDevice.setFlashTorchMode(true);
                flashStatus = true;
                ShowToast("TurnOn");
            }
            // AndroidJavaObject cameraManager = new AndroidJavaObject("android.hardware.camera2.CameraManager");
            // AndroidJavaObject context = new AndroidJavaClass("com.unity3d.player.UnityPlayer")
            //     .GetStatic<AndroidJavaObject>("currentActivity");
            // string[] cameraIds = cameraManager.Call<string[]>("getCameraIdList");

            // if (flashStatus)
            // {
            //     if (cameraIds.Length > 0)
            //     {
            //         cameraManager.Call("setTorchMode", cameraIds[4], false);
            //         flashStatus = false;
            //     }
            // }
            // else
            // {
            //     if (cameraIds.Length > 0)
            //     {
            //         cameraManager.Call("setTorchMode", cameraIds[4], true);
            //         flashStatus = true;
            //     }

            // }
        }
        catch (System.Exception e)
        {
            ShowToast("Error: " + e.Message);
            throw;
        }
    }

    private void ShowToast(string message)
    {
        AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject unityActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
        AndroidJavaObject toast = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 1);
        toast.Call("show");
    }
}
