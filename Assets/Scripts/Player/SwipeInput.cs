using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Events;

public class SwipeInput : MonoBehaviour
{
    private Vector2 fingerDownPosition;
    private Vector2 fingerUpPosition;

    [SerializeField]
    private float minSwipeDistance = 20f;

    [System.Serializable]
    public class SwipeEvent : UnityEvent<SwipeDirection> { }

    public SwipeEvent OnSwipe = new SwipeEvent();

    private void Update()
    {
        if (Input.touches.Length > 0)
        {
            Touch touch = Input.touches[0]; 

            if (touch.phase == TouchPhase.Began)
            {
                fingerDownPosition = touch.position;
                fingerUpPosition = touch.position;
            }

            if (touch.phase == TouchPhase.Moved)
            {
                fingerUpPosition = touch.position;
            }

            if (touch.phase == TouchPhase.Ended)
            {
                fingerUpPosition = touch.position;
                CheckSwipeDirection();
            }
        }
    }

    private void CheckSwipeDirection()
    {
        float distanceX = Mathf.Abs(fingerDownPosition.x - fingerUpPosition.x);
        float distanceY = Mathf.Abs(fingerDownPosition.y - fingerUpPosition.y);

        if (distanceX > minSwipeDistance || distanceY > minSwipeDistance)
        {
            if (distanceX > distanceY)
            {
                if (fingerDownPosition.x < fingerUpPosition.x)
                {
                    OnSwipe?.Invoke(SwipeDirection.Right);
                }
                else
                {
                    OnSwipe?.Invoke(SwipeDirection.Left);
                }
            }
            else
            {
                if (fingerDownPosition.y < fingerUpPosition.y)
                {
                    Debug.Log("SwipeUp");
                    OnSwipe?.Invoke(SwipeDirection.Up);
                }
                else
                {
                    OnSwipe?.Invoke(SwipeDirection.Down);
                }
            }
        }
    }
}

public enum SwipeDirection
{
    Up,
    Down,
    Left,
    Right
}