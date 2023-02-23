---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: driveTo(double, double)
---
# void driveTo(double x, double y)
This function will drive the robot to a point on the field. It will use the default pid controller to do so.

## Explanation
This function invokes the same function that `followPath` invokes. It uses a 2 control point array so that the path is a straight line. 

## Example
```cpp
//This will drive the robot to the point (12, 12) on the field
wc.driveTo(12, 12);
```