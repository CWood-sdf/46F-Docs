---
    parent: DriveController
    layout: default
    grand_parent: Docs
    title: DriveController(Chassis*, int, std::function&lt;double(double)>)
---
# DriveController(Chassis* chassis, int threshold, std::function&lt;double(double)> speedCurve)
Constructs a DriveController with the 

## Parameters
- `chassis` - The chassis to drive the motors on
- `threshold` - The joystick threshold
- `speedCurve` - The function to curve the controller with. 

## Example
```cpp
//use a linear speed curve
DriveController dc = DriveController(&chassis, 20, [](double v){ return v; });
```