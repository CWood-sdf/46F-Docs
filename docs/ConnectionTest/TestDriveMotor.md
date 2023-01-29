---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: TestDriveMotor(device)
---
# TestDriveMotor(device)
This macro adds a drive motor to the global `connectedDevices` array.

## Parameter
- `device` - The device to add to the array.

## Inner Workings
See [TestDevice](TestDevice/) for a more detailed explanation. This macro uses a different `AddDevice` constructor that takes a boolean parameter to indicate if the motor is a drive motor. This is used later in `testMotorConfiguration`. 

Which makes the actual definition look like this:
```cpp
#define TestDriveMotor(device) AddDevice device##AddDevice(#device, &device, true);
```

What all this macro craziness allows me to do is make a macro that very cleanly does what would be much more work if I had to do it manually.
```cpp
//Macro style:
motor motor1 = motor(PORT1);
TestDriveMotor(motor1);

//Cpp style:
motor motor1 = motor(PORT1);
AddDevice motor1AddDevice("motor1", &motor1, true);
```

