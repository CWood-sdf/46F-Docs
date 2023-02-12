---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: remake(Chassis*)
---
# void remake(Chassis* chassis)
Remakes the last path with the given chassis

## Parameter
- `chassis` - The chassis to use for speed data

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
path.remake(&chassis);
```