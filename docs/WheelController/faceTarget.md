---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: faceTarget(PVector)
---
# void faceTarget(PVector target)
Turns the robot to face a target position.

## Parameters
- `target` - The target position

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
wc.faceTarget({12, 12});
```