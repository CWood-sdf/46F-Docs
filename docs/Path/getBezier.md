---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: getBezier()
---
# VectorArr getBezier()
Returns the bezier curve for the path

## Returns
A bezier curve

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
path.remake(&chassis);
```