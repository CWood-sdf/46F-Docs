---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: driveFromDiff(double, double)
---
# void driveFromDiff(double speedPct, double diffPct)
Drives the chassis on the given differential speed

{: .note}
This function limits the forward speed to the speed limit of the robot. This means that if you are using this function (or any of the other drive functions because they all call this one) and you want to drive at a speed greater than the speed limit, you will have to call [setSpeedLimit](setSpeedLimit) first.

## Parameters
- `speedPct` - The speed to drive at in pct units
- `diffPct` - The differential speed to drive at in pct units

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

//Drive at 25% speed with 10% differential (aka 35% left and 15% right)
chasis.driveFromDiff(25, 10);
```