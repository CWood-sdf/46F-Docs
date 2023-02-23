---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: purePursuitFollow(VectorArr, bool)
---
# void purePursuitFollow(VectorArr controlPoints, bool reverse)
Follows a path using the default pure pursuit controller. This function is blocking, and will not return until the robot has finished following the path.

## Parameters
- `controlPoints` - The control points of the path, except for the starting point (which is assumed to be the robot's current position)
- `reverse` - If true, the robot will drive backwards

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
wc.purePursuitFollow({ {0, 24}, {24, 24} }, false);
```