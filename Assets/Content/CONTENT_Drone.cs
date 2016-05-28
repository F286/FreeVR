using UnityEngine;
using System.Collections;

public class CONTENT_Drone : MonoBehaviour 
{
    public float lift = 30f;
    public Transform target;
//    public float tilt = 10;
    public float tiltForward = 0.2f;

    public Transform damp;

    public void Start()
    {
        #if UNITY_EDITOR
        Cursor.lockState = CursorLockMode.Locked;
        #endif
    }

//    Vector2 p;
    public void Update()
    {
        if (Application.isEditor)
        {
//            var e = target.localRotation.eulerAngles;

//            var deltaP = p == Vector2.zero ? Vector2.zero : (Vector2)Input.mousePosition - p;

//            e.x += -Input.GetAxis("Mouse Y") * 10f;
//            e.y += Input.GetAxis("Mouse X") * 10f;
//            e.y += deltaP.x * 0.6f;

//            var r = target.localRotation;
//            r.eulerAngles = e;
//            target.localRotation = Quaternion.Euler(e);
            var e = target.localRotation.eulerAngles;
            e += new Vector3(-Input.GetAxis("Mouse Y") * 10f, Input.GetAxis("Mouse X") * 10f, 0);

            target.localRotation = Quaternion.Euler(e);

//            p = Input.mousePosition;

//            Cursor.lockState = CursorLockMode.Locked;
//            Cursor.lockState = CursorLockMode.None;
        }

        if (Input.GetMouseButton(0))
        {
            GetComponent<Rigidbody>().isKinematic = false;
        }
    }
    public void FixedUpdate()
    {
        var forward = damp.forward * Vector3.Dot(damp.forward, GetComponent<Rigidbody>().velocity);
        var right = damp.right * Vector3.Dot(damp.right, GetComponent<Rigidbody>().velocity);
        var upD = Vector3.Dot(damp.up, GetComponent<Rigidbody>().velocity);

        right *= 0.995f;

//        if (upD > 0)
//        {
//            upD *= 0.998f;
//        }
//        else
//        {
//            upD *= 0.998f;
//        }
        var up = damp.up * upD;

        GetComponent<Rigidbody>().velocity = forward + right + up;


        var tilted = Vector3.Lerp(target.up, target.forward, tiltForward);
        tilted.Normalize();
        GetComponent<Rigidbody>().AddForce(tilted * Time.fixedDeltaTime * lift);
    }
}
