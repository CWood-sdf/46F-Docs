---
    parent: TrackingWheel
    layout: default
    grand_parent: Docs
    title: TrackingWheel(motor&amp;, bool, double, double)
---
# TrackingWheel(motor&amp; m, bool reversed, double gearRatio, double diameter)
Makes a new tracking wheel object with the given motor, gear ratio, and diameter.

## Parameters
- `m` - The motor to use for the tracking wheel.
- `reversed` - Whether the motor is reversed.
- `gearRatio` - The gear ratio on the motor (input over output).
- `diameter` - The diameter of the tracking wheel in inches. 

## Explanation
This constructor is intended to only be used when there are no actual tracking wheels on the robot. If your robot does not have any tracking wheels, your program should only use the PID drive functions, not the followPath functions (which require odometry).

## Example
```cpp
// Create a tracking wheel object with a 3:2 gear ratio and a 3.25" diameter wheel
TrackingWheel trackingWheel(motor, false, 3.0/2.0, 3.25);
```