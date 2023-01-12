---
    title: PVector(const PVector&)
    parent: PVector
    layout: default
    grand_parent: Docs
---
# PVector(const PVector& other)
This constructor creates a new PVector by copying the values from the given PVector. This is a copy constructor, so the given PVector is left unchanged.

## Parameters
- `other` - The PVector to copy

## Example
```cpp
PVector o = PVector(1.0, 3.0, 4.0);
PVector v = PVector(o);
/*
v.x == 1.0
v.y == 3.0
v.z == 4.0
*/
```

## See Also
- [PVector(double, double, double)](ctor_double_double_double)