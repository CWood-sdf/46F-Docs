---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: backwardsDriveDistance(double, PidController*)
---
# void backwardsDriveDistance(double distance, PidController* controller)
Drives the robot the specified distance backwards using the specified PidController.

## Parameters
- `distance` - The distance to drive
- `controller` - The PidController to use

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);

wc.backwardsDriveDistance(24, &pidController);
```