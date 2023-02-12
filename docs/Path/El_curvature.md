---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: El::curvature
---
# double El::curvature
A variable that holds the curvature of the path at the given path point

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
double curvature = path.path[0].curvature;
```