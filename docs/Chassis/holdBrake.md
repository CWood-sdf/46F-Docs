---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: holdBrake()
---
# void holdBrake()
Brakes the chassis using `brakeMode::hold`

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

//Brake the chassis
chassis.holdBrake();
```