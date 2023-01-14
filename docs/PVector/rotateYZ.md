---
    parent: PVector
    layout: docs
    grand_parent: Docs
    title: rotateYZ(double)
---
# PVector& rotateYZ(double angle)
Rotates the vector by the specified angle in the YZ plane. The X value is not affected. This function modifies the vector.

## Parameters
- `angle` - the angle to rotate by, specified in radians

## Returns
A reference to the vector. 

## Example
```cpp
PVector v = new PVector(0, 0, 1);
v.rotateYZ(90);
// v is now (0, 1, 0)
v.rotateYZ(90);
// v is now (0, 0, -1)
```

