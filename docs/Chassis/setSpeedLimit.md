---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: setSpeedLimit(double)
---
# Chassis& setSpeedLimit(double speedLimitPct)
Sets the speed limit of the chassis

## Parameter
- `speedLimitPct` - The speed limit of the chassis in pct units

## Returns
The chassis

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

chassis.setSpeedLimit(80);
```