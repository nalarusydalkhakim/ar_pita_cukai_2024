using System.Collections;
using System.Collections.Generic;
using easyar;
using UnityEngine;

public class ARController : MonoBehaviour
{
    public ARSession Session;
    public TouchController[] TouchControl;
    private void Awake()
    {
        Session.StateChanged += (state) =>
            {
                if (state == ARSession.SessionState.Ready)
                {
                    for (int i = 0; i < TouchControl.Length; i++)
                    {
                        TouchControl[i].TurnOn(TouchControl[i].gameObject.transform, Session.Assembly.Camera, true, true, true, true);
                    }
                }
            };
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
