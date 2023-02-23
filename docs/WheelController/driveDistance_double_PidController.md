---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: driveDistance(double, PidController*)
---
# void driveDistance(double distance, PidController\* controller)
Drives the robot the specified distance using the specified PidController.

## Parameters
- `distance` - The distance to drive
- `controller` - The PidController to use

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);

wc.driveDistance(24, &pidController);
```