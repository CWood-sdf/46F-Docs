---
    parent: Inertial
    layout: docs
    grand_parent: Docs
    title: setHeading(double)
---
# void setHeading(double heading)
Sets the heading of the robot in degrees.

## Parameters
- `heading` The heading of the robot in degrees.

## Example
```cpp
// Create an inertial sensor object
Inertial sensor = Inertial(PORT16, 358.0, 358.0);

// Set the heading of the robot to 90 degrees
sensor.setHeading(90);
```