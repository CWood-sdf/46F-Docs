---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: driveFromLR(double, double)
---
# void driveFromLR(double leftSpeedPct, double rightSpeedPct)
Drives the chassis on the given left and right wheel speeds

## Parameters
- `leftSpeedPct` - The speed to drive the left side at in pct units
- `rightSpeedPct` - The speed to drive the right side at in pct units

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

//Drive at 50% left and 100% right
chassis.driveFromLR(50, 100);
```