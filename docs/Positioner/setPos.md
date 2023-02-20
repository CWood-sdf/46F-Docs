---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: setPos(PVector, double)
---
# void setPos(PVector pos, double angle)
Sets the position of the robot to the given position and angle.

## Parameters
- `pos` - The position to set the robot to.
- `angle` - The angle to set the robot to.

## Example
```cpp
positioner.setPos(PVector(0, 0), 0);

cout << positioner.position() << endl;
// Prints [0, 0, 0]
```