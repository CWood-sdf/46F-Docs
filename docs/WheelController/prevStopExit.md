---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: prevStopExit()
---
# void prevStopExit()
Both `followPath` and `driveDistance` have functionality that stops the driving if the robot's estimated velocity is less than 0.05 inches per second for 50 milliseconds. This function prevents that functionality from being used for the next movement command.

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
wc.prevStopExit();
wc.driveTo(12, 12);
```