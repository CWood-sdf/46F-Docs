---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: AddDevice::AddDevice(string, vex::motor*)
---
# AddDevice::AddDevice(string name, vex::motor* motor)
This constructor adds a motor to the global `connectedDevices` array.

## Parameters
- `name` - The name of the motor.
- `motor` - The motor to add to the array.

## Example
```cpp
motor motor1 = motor(PORT1);
AddDevice motor1AddDevice("motor1", &motor1);
```
