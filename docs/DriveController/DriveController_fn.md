---
    parent: DriveController
    layout: default
    grand_parent: Docs
    title: DriveController(Chassis*, std::function&lt;double(double)>)
---
# DriveController(Chassis* chassis, std::function&lt;double(double)> speedCurve)
Constructs a DriveController with the given chassis and speed curve. 

## Parameters
- `chassis` - The chassis to drive the motors on
- `speedCurve` - The function to curve the controller with. 

## Example
```cpp
//use a linear speed curve
DriveController dc = DriveController(&chassis, [](double v){ return v; });
```