---
    parent: PVector
    layout: docs-math
    grand_parent: Docs
    title: angleBetween(PVector, PVector)
---
# static double angleBetween(PVector v1, PVector v2)
Gets the angle between the two vectors in the XY plane.

## Parameters
- `v1` - the first vector
- `v2` - the second vector

## Returns
The angle between the two vectors, in degrees. 

## Example
```cpp
    PVector v1 = new PVector(0, 1, 0);
    PVector v2 = new PVector(1, 0, 0);
    double angle = PVector.angleBetween(v1, v2);
    // angle is 90
```