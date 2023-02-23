---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: driveDistance(double)
---
# void driveDistance(double distance)
Drives the robot the specified distance using the default PidController. 

## Parameters
- `distance` - The distance to drive

## Explanation
This function uses the default PidController to drive the robot the specified distance. 

It starts with a loop, then all the exit conditions are handled. It then calculates the distance from the target, and sends that and angle data to the PidController. It then slews speed to the chassis speed limit, then it spins the motors at the specified speed.

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
wc.driveDistance(24);
```