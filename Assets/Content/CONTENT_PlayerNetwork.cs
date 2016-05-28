using UnityEngine;
using System.Collections;
using UnityEngine.Networking;

public class CONTENT_PlayerNetwork : NetworkBehaviour 
{
    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();

        foreach (var item in transform)
        {
            Destroy(((Transform)item).gameObject);
        }
    }

    public void Update()
    {
        if (isLocalPlayer)
        {
            transform.position = Camera.main.transform.position;
            transform.rotation = Camera.main.transform.rotation;
        }
    }

//	// Use this for initialization
//	public void Awake () 
//    {
//        Debug.Log("start player");
//	
//	}
}
