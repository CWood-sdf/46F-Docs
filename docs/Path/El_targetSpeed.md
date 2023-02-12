---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: El::targetSpeed
---
# double El::targetSpeed
A variable that holds the target speed of the current path point

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
chassis.driveFromDiff(path.path[0].targetSpeed, 0, fwd);
```