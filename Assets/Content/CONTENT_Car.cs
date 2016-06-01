using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;

public class CONTENT_Car : NetworkBehaviour 
{
    public Transform cameraAttach;
//    public Transform cameraActual;

    public void Awake()
    {
        GetComponent<Rigidbody>().centerOfMass += new Vector3(0, -0.5f, 0);
    }
    public override void OnStartLocalPlayer()
    {
        base.OnStartLocalPlayer();

//        foreach (var item in transform)
//        {
//            Destroy(((Transform)item).gameObject);
//        }
    }

    Vector3 positionV;
    public void LateUpdate()
    {
        if (isLocalPlayer)
        {
            var holder = GameObject.FindGameObjectWithTag("camera holder").transform;
            holder.position = Vector3.SmoothDamp(holder.position, cameraAttach.position, ref positionV, 0.04f);
            holder.rotation = Quaternion.Lerp(holder.rotation, cameraAttach.rotation, 0.5f);
        }
    }


    public List<AxleInfo> axleInfos; // the information about each individual axle
    public float maxMotorTorque; // maximum torque the motor can apply to wheel
    public float maxSteeringAngle; // maximum steer angle the wheel can have

    public void FixedUpdate()
    {
//        print(Input.GetAxis("Vertical"));
        float motor = maxMotorTorque * Input.GetAxis("Vertical");
        float steering = maxSteeringAngle * Input.GetAxis("Horizontal");

        foreach (AxleInfo axleInfo in axleInfos)
        {
            if (axleInfo.steering)
            {
                axleInfo.leftWheel.steerAngle = steering;
                axleInfo.rightWheel.steerAngle = steering;
            }
            if (axleInfo.motor)
            {
                axleInfo.leftWheel.motorTorque = motor;
                axleInfo.rightWheel.motorTorque = motor;
            }
            ApplyLocalPositionToVisuals(axleInfo.leftWheel);
            ApplyLocalPositionToVisuals(axleInfo.rightWheel);
        }
    }
    // finds the corresponding visual wheel
    // correctly applies the transform
    public void ApplyLocalPositionToVisuals(WheelCollider collider)
    {
        if (collider.transform.childCount == 0) 
        {
            return;
        }

        Transform visualWheel = collider.transform.GetChild(0);

        Vector3 position;
        Quaternion rotation;
        collider.GetWorldPose(out position, out rotation);

        visualWheel.transform.position = position;
        visualWheel.transform.rotation = rotation;
    }
}

[System.Serializable]
public class AxleInfo 
{
    public WheelCollider leftWheel;
    public WheelCollider rightWheel;
    public bool motor; // is this wheel attached to motor?
    public bool steering; // does this wheel apply steer angle?
}