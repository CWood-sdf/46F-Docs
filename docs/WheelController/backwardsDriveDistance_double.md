---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: backwardsDriveDistance(double)
---
# void backwardsDriveDistance(double distance)
Drives the robot the specified distance backwards using the default PidController.

## Parameters
- `distance` - The distance to drive

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);

wc.backwardsDriveDistance(24);
```