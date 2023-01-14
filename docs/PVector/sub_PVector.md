---
    parent: PVector
    layout: docs
    grand_parent: Docs
    title: sub(PVector)
---

# PVector& sub(PVector o)

Subtracts the components of the `other` vector to the vector that is operated on. This function is equivalent to using the [operator-=](op_mneq_PVector) function.

## Parameters

- `other` - The vector to subtract from the current vector

## Returns

A reference to the vector

## Examples

```cpp
PVector v = PVector(1, 2);
PVector o = PVector(3, 4, 5);

v.sub(o);
/*
v.x == -2
v.y == -2
v.z == -5
*/
```

## See Also
