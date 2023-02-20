---
    parent: Inertial
    layout: default
    grand_parent: Docs
    title: Inertial(in32_t, double, double)
---
# Inertial(in32_t port, double fullTurnNegative, double fullTurnPositive)
Makes a new inertial sensor object with the given port and error data

## Parameters
- `port` - The port the inertial sensor is on
- `fullTurnNegative` - The reading on the sensor when it is turned 360 degrees in the negative direction (counter-clockwise)
- `fullTurnPositive` - The reading on the sensor when it is turned 360 degrees in the positive direction (clockwise)

## Example
```cpp
//Usually fullTurnNegative and fullTurnPositive are equivalent, but sometimes they are not
//This constructor call is the current one I am using at the time of writing this
Inertial angler = Inertial(PORT16, 358.0, 358.0);
```