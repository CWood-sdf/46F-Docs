---
    parent: ConnectionTest
    layout: docs
    grand_parent: Docs
    title: AddDevice::AddDevice(string, vex::motor*, bool)
---
# AddDevice::AddDevice(string name, vex::motor* motor, bool isDriveMotor)
Adds a drive motor to the global `connectedDevices` array.

## Parameters
- `name` - The name of the motor.
- `motor` - The motor to add to the array.
- `isDriveMotor` - Whether or not the motor is a drive motor.

## Example
```cpp  
motor motor1 = motor(PORT1);
AddDevice motor1AddDevice("motor1", &motor1, true);
``` 