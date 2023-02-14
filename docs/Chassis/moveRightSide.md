---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: moveRightSide(double)
---
# void moveRightSide(double speedPct)
Moves the right side of the chassis at the given speed

## Parameters
- `speedPct` - The speed to move at in pct units

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

//Move the right side at 50% speed
chassis.moveRightSide(50);
```
