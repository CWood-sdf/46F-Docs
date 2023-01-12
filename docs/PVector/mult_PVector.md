---
    title: mult(PVector)
    parent: PVector   
    layout: default   
    grand_parent: Docs
---

# PVector& mult(PVector o)

This function multiplies each component of the vector by the corresponding component of the parameter vector. This function is technically not a part of linear algebra and I am not even sure if it has any geometric basis, but I just have it. It's only potential use would be doing basic math with three different numbers at the same time.

## Parameters

- `o` - The vector to multiply the current vector by

## Returns

A reference to the vector

## Example

```cpp
PVector v = PVector(1, 2, 3);
PVector o = PVector(2, 3, 4);

v.mult(o);
/*
v.x == 2
v.y == 6
v.z == 12
*/
```

## See Also
