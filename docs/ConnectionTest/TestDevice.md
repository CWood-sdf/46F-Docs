---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: TestDevice(device)
---
# TestDevice(device)
This macro adds a device to the global `connectedDevices` array. 

## Parameter
- `device` - The device to add to the array.

## Inner Workings
Macros have 2 actually useful features. The first is the double hash mark `##` which allows you to concatenate names together. The second is the single hash mark `#` which allows you to convert a macro parameter into a string literal. What this does is first use the `##` to make a global `AddDevice` variable that is named the device name followed by `AddDevice`. So if the device is named BL, the variable will be named `BLAddDevice`. Next, to call the constructor, it uses the `#` to convert the device parameter into a string literal for the name, then uses the `&` operator to convert it to a pointer so that the device can be implicitly cast to a `vex::device` pointer because they all inherit from the `vex::device` class.

Which makes the actual definition look like this:
```cpp
#define TestDevice(device) AddDevice device##AddDevice(#device, &device);
```

What all this macro craziness allows me to do is make a macro that very cleanly does what would be much more work if I had to do it manually.
```cpp
//Macro style:
motor motor1 = motor(PORT1);
TestDevice(motor1);

//Cpp style:
motor motor1 = motor(PORT1);
AddDevice motor1AddDevice("motor1", &motor1);
```