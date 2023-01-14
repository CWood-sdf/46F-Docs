---
    parent: PVector
    layout: docs
    grand_parent: Docs
    title: rotateXY(double)
---
# PVector& rotateXY(double angle)
Rotates the vector by the specified angle in the XY plane. The Z value is not affected. This function modifies the vector.

## Parameters
- `angle` - the angle to rotate by, specified in radians

## Returns
A reference to the vector. 

## Example
```cpp
PVector v = new PVector(0, 1, 0);
v.rotateXY(90);
// v is now (1, 0, 0)
v.rotateXY(90);
// v is now (0, -1, 0)
```

