using UnityEngine;
using UnityEngine.Events;

public class SwipeInput : MonoBehaviour
{

    private Vector2 fingerDown;
    private Vector2 fingerUp;

    [Range(0f, 500f)]
    public float minDistanceToSwipe = 80f;

    private bool swipeDetected = false;

    public UnityEvent jumpEvent;
    public UnityEvent moveRightEvent;
    public UnityEvent moveLeftEvent;
    public UnityEvent diveEvent;



    private void Update()
    {
        DetectSwipe();
    }

    //Detects swipe direction and magnitude
    public void DetectSwipe()
    {

        if (Input.touches.Length > 0)
        {
            if (!swipeDetected)
            {
                Touch touch = Input.touches[0];
                if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    fingerUp = fingerDown = Input.GetTouch(0).position;
                }

                if (Input.GetTouch(0).phase == TouchPhase.Moved)
                {
                    fingerUp = Input.GetTouch(0).position;
                    CheckSwipe();
                }
            }

            if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                swipeDetected = false;
            }
        }


    }

    //Checks the direction of the swipe and calls the appropriate function
    private void CheckSwipe()
    {

        float deltaX = fingerUp.x - fingerDown.x;
        float deltaY = fingerUp.y - fingerDown.y;

        if (Mathf.Abs(deltaX) < minDistanceToSwipe && Mathf.Abs(deltaY) < minDistanceToSwipe)
            return;

        if (Mathf.Abs(deltaX) > Mathf.Abs(deltaY))
        {
            if (deltaX > 0)
            {
                SwipeRight();
            }
            else if (deltaX < 0)
            {
                SwipeLeft();
            }
        }
        else
        {
            if (deltaY > 0)
            {
                SwipeUp();
            }
            else if (deltaY < 0)
            {
                SwipeDown();
            }
        }
        fingerUp = fingerDown;
    }

    private void SwipeUp()
    {
        jumpEvent.Invoke();
        Debug.Log("Swipe Up");
        swipeDetected = true;
    }

    private void SwipeDown()
    {
        diveEvent.Invoke();
        Debug.Log("Swipe Down");
        swipeDetected = true;
    }

    private void SwipeLeft()
    {
        moveLeftEvent.Invoke();
        Debug.Log("Swipe Left");
        swipeDetected = true;
    }

    private void SwipeRight()
    {
        moveRightEvent.Invoke();
        Debug.Log("Swipe Right");
        swipeDetected = true;
    }
}
