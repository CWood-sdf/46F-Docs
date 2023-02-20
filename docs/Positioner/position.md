---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: position()
---
# PVector position()
Returns the position of the robot.

## Returns
A `PVector` containing the position of the robot.

## Example
```cpp
positioner.setPos(PVector(0, 0), 0);
cout << positioner.position() << endl;
// Prints [0, 0, 0]
```
