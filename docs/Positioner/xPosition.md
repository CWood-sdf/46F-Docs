---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: xPosition()
---
# double xPosition()
Returns the x position of the robot in inches.

## Returns
A `double` containing the x position of the robot in inches.

## Example
```cpp
positioner.setPos(PVector(0, 0), 0);
cout << positioner.xPosition() << endl;
// Prints 0
```