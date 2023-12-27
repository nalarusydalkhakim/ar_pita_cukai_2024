using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARManager : MonoBehaviour
{
    public static ARManager instance;
    [System.NonSerialized] public bool IsPlay;


    private void Awake()
    {
        instance = this;
        DontDestroyOnLoad(this.gameObject);
    }

    public void SetIsPlay()
    {
        IsPlay = true;
    }
    // Start is called before the first frame update
    void Start()
    {
        SetIsPlay();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
