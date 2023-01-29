---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: AddDevice::AddDevice(string, vex::device*)
---
# AddDevice::AddDevice(string name, vex::device* device)
This constructor adds a device to the global `connectedDevices` array.

## Parameters
- `name` - The name of the device.
- `device` - The device to add to the array.

## Example
```cpp
motor motor1 = motor(PORT1);
AddDevice motor1AddDevice("motor1", &motor1);
```
