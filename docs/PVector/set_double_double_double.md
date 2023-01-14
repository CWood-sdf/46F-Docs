---
    title: set(double, double, double)
    parent: PVector
    layout: docs
    grand_parent: Docs
---

# PVector& set(double x, double y, double z = 0.0)

This method sets the x, y, and z values of the PVector to the given values. This method returns a reference to the PVector, so it can be chained.
The z value is set to 0.0 by default, so it only needs to be passed optionally

## Parameters

- `x` - The new x value of the vector
- `y` - The new y value of the vector
- `z` - The new z value of the vector

## Returns

A reference to the vector

## Examples

```cpp
PVector v = PVector(1.0, 2.0, 3.0);
v.set(4.0, 5.0, 6.0);
/*
v.x == 4.0
v.y == 5.0
v.z == 6.0
*/
```

```cpp
PVector v = PVector(1.0, 2.0, 3.0);
v.set(4.0, 5.0);
/*
v.x == 4.0
v.y == 5.0
v.z == 0.0
*/
```

## See Also

- [set(PVector)](set_PVector)
