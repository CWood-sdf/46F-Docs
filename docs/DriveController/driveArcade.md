---
    parent: DriveController
    layout: docs
    grand_parent: Docs
    title: driveArcade(axis&amp;, axis&amp;, bool = false, bool = false)
---
# DriveController&amp; driveArcade(const controller::axis&amp; forwardAxis, const controller::axis&amp; turnAxis, bool reverseForward = false, bool reverseTurn = false)
Drives the robot arcade style (one stick for forward, the other for turn) with the option of reversing the stick values. 

## Parameters
- `forwardAxis` - The axis to drive the robot forward on. 
- `turnAxis` - The axis to turn the robot on. 
- `reverseForward` - Whether to reverse the forward axis' value
- `reverseTurn` - Whether to reverse the turn axis' value

## Example
```cpp

dc.driveArcade(Greg.Axis3, Greg.Axis4);
```