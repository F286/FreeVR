using UnityEngine;
using System.Collections;
using UnityEngine.Networking;

public class CONTENT_NetworkHud : NetworkManager 
{
//    void Start()
//    {
//        GvrViewer.Instance.OnTrigger += TriggerPulled;
//    }
//
////    void OnDisable()
////    {
////        GvrViewer.Instance.OnTrigger -= TriggerPulled;
////    }
//
//    void TriggerPulled() 
//    {
//        GetComponent<NetworkManagerHUD>().showGUI = false;
////        Debug.Log("The trigger was pulled!");
//    }
//
    public override void OnStartClient(NetworkClient client)
    {
        base.OnStartClient(client);


        GetComponent<NetworkManagerHUD>().showGUI = false;
    }
    public void Start()
    {
        if (Application.isEditor)
        {
            GetComponent<NetworkManager>().StartHost();
        }
    }
//    public void Update()
//    {
//        if (Time.time > 60)
//        {
//            GetComponent<NetworkManagerHUD>().showGUI = false;
//        }
//    }

    float native_width = 640;
    float native_height = 480;

    public void OnGUI ()
    {
        //set up scaling
        var rx = Screen.width / native_width;
        var ry = Screen.height / native_height;
        GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(rx, ry, 1)); 
    }
}
