---
    parent: Inertial
    layout: default
    grand_parent: Docs
    title: Inertial(inertial&amp;, double, double)
---
# Inertial(inertial&amp; sensor, double fullTurnNegative, double fullTurnPositive)
Makes a new inertial sensor object with the given sensor and error data

{: .note}
The error data will vary between inertial sensors, and may sometimes vary over time.

## Parameters
- `sensor` - The inertial sensor to use
- `fullTurnNegative` - The reading on the sensor when it is turned 360 degrees in the negative direction (counter-clockwise)
- `fullTurnPositive` - The reading on the sensor when it is turned 360 degrees in the positive direction (clockwise)

## Example
```cpp
inertial sensor = inertial(PORT16);
//Usually fullTurnNegative and fullTurnPositive are equivalent, but sometimes they are not
Inertial angler = Inertial(sensor, 358.0, 358.0);
```