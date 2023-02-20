---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: yPosition()
---
# double yPosition()
Returns the y position of the robot in inches.

## Returns
A `double` containing the y position of the robot in inches.

## Example
```cpp
positioner.setPos(PVector(0, 0), 0);
cout << positioner.yPosition() << endl;
// Prints 0
```