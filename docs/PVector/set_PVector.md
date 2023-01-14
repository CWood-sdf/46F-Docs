---
    title: set(PVector)
    parent: PVector
    layout: docs
    grand_parent: Docs
---

# PVector& set(PVector v)

This method sets the values of the current vector, to the values of the given vector. This method returns a reference to the PVector, so it can be chained.

## Parameters

- `v` - The vector to copy the values from

## Returns

A reference to the vector

## Example

```cpp
PVector o = PVector(1.0, 2.0);
PVector v = PVector(3.0, 4.0);
v.set(o);
/*
v.x == 1.0
v.y == 2.0
v.z == 0.0
*/
```

## See Also

- [set(double, double, double)](set_double_double_double)
- [operator=(PVector)](op_eq_PVector)
