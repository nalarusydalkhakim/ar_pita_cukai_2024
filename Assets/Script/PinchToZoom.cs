using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PinchToZoom : MonoBehaviour, IDragHandler
{

    public float minScale, maxScale;

    private float initialDistance;
    private Vector3 initialScale;
    private Vector3 _beforeScale;
    private bool isScale;
    private float _rate = 0.3f;

    public void OnDrag(PointerEventData eventData)
    {
        if(initialScale.x > minScale + 0.2)
        {
            transform.localPosition = new Vector2(transform.localPosition.x + (eventData.delta.x * _rate), transform.localPosition.y + (eventData.delta.y * _rate));
        }
    }


    public void Start()
    {
        Initiate();
    }

    public void Initiate()
    {
        transform.localScale = new Vector3(1f, 1f, 1f);
        transform.localPosition = new Vector3(0, 0, 0);
        isScale = true;
    }

    private void Update()
    {
        if (Input.touchCount == 2)
        {
            var touchZero = Input.GetTouch(0);
            var touchOne = Input.GetTouch(1);

            // if one of the touches Ended or Canceled do nothing
            if (touchZero.phase == TouchPhase.Ended || touchZero.phase == TouchPhase.Canceled
               || touchOne.phase == TouchPhase.Ended || touchOne.phase == TouchPhase.Canceled)
            {
                return;
            }

            // It is enough to check whether one of them began since we
            // already excluded the Ended and Canceled phase in the line before
            if (touchZero.phase == TouchPhase.Began || touchOne.phase == TouchPhase.Began)
            {
                // track the initial values
                initialDistance = Vector2.Distance(touchZero.position, touchOne.position);
                initialScale = transform.localScale;
            }
            // else now is any other case where touchZero and/or touchOne are in one of the states
            // of Stationary or Moved
            else
            {
                // otherwise get the current distance
                var currentDistance = Vector2.Distance(touchZero.position, touchOne.position);

                // A little emergency brake ;)
                if (Mathf.Approximately(initialDistance, 0)) return;

                // get the scale factor of the current distance relative to the inital one
                var factor = currentDistance / initialDistance;
                _beforeScale = initialScale * factor;

                if (_beforeScale.x < minScale && factor < 1)
                {
                    isScale = false;
                }
                else if (_beforeScale.x > maxScale && factor > 1)
                {
                    isScale = false;
                }
                else
                {
                    isScale = true;
                }

                // apply the scale
                // instead of a continuous addition rather always base the 
                // calculation on the initial and current value only
                if (isScale)
                {
                    transform.localScale = initialScale * factor;
                }
            }
        }
    }
}
