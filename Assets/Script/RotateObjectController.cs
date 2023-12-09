using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateObjectController : MonoBehaviour
{
    public float rotationSpeed = 5f;

    private Vector2 touchStartPos;
    private bool isSwiping = false;

    // public GameObject fishObject;

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    touchStartPos = touch.position;
                    isSwiping = true;
                    break;

                case TouchPhase.Moved:
                    if (isSwiping)
                    {
                        Vector2 swipeDelta = touch.position - touchStartPos;

                        if (Mathf.Abs(swipeDelta.x) > Mathf.Abs(swipeDelta.y))
                        {
                            float rotationAmount = swipeDelta.x > 0 ? -rotationSpeed : rotationSpeed;
                            RotateObject(rotationAmount);
                            isSwiping = false;
                        }
                    }
                    break;

                case TouchPhase.Ended:
                    isSwiping = false;
                    break;
            }
        }
    }

    void RotateObject(float rotationAmount)
    {
        // Rotate the object based on the specified rotation amount
        transform.Rotate(Vector3.up, rotationAmount * Time.deltaTime);
    }
}
