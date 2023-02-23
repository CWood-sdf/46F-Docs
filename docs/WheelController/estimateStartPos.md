---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: estimateStartPos(PVector, double)
---
# void estimateStartPos(PVector pos, double angle)
Sets the starting position for the robot, and if the color is blue, reverses this position. 

## Parameters
- `pos` - The position of the robot
- `angle` - The angle of the robot

## Example
```cpp
wc.estimateStartPos({12, 12}, 90);
// The robot is now at (12, 12) and facing 90 degrees
```