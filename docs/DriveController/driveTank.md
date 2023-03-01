---
    parent: DriveController
    layout: docs
    grand_parent: Docs
    title: driveTank(axis&amp;, axis&amp;)
---
# DriveController&amp; driveTank(const controller::axis&amp; leftAxis, const controller::axis&amp; rightAxis)
Drives the robot arcade style (with one stick for left and the other for right)

## Parameters
- `leftAxis` - The axis for the left side
- `rightAxis` - The axis for the right side

## Example
```cpp
dc.driveTank(Greg.Axis3, Greg.Axis2);
```