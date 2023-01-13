---
    title: dist3D(PVector)
    parent: PVector
    layout: default
    grand_parent: Docs
---
# double dist3D(PVector v)
Gets the 3D Euclidian distance between the current vector and the parameter vector.

## Parameters
- `v` - The vector to compare the current vector to

## Returns
A double representing the Euclidian distance between the current vector and the origin

## Explanation

The expaned Euclidian distance formula for 3 dimensions from geometry is (still) pretty simple:

$ sqrt((x_2 - x_1)^2 + (y_2 - y_1)^2 + (z_1 - z_2)^2) $

## Example
```cpp
PVector v = PVector(4, 5, 2);
PVector v2 = PVector(1, 1, 1);
v.dist3D(); // Returns sqrt(26)
```

## See Also
- [dist2D(PVector)](dist2D_PVector)