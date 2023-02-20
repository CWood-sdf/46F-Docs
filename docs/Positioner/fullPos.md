---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: fullPos()
---
# FieldCoord fullPos()
Returns the full position of the robot.

## Returns
A `FieldCoord` containing the full position of the robot.

## Example
```cpp
positioner.setPos(PVector(10, 20), 90);
cout << positioner.fullPos() << endl;
// Prints [10, 20, 0], 90
```