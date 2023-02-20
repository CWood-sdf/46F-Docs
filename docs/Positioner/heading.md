---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: heading()
---
# double heading()
Returns the heading of the robot in degrees.

## Returns
A `double` containing the heading of the robot in degrees.

## Example
```cpp
positioner.setPos(PVector(0, 0), 90);
cout << positioner.heading() << endl;
//prints 90
```