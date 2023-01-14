---
    title: div(PVector)
    parent: PVector   
    layout: docs   
    grand_parent: Docs
---

# PVector& div(PVector o)

This function divides each component of the vector by the corresponding component of the parameter vector. This function is technically not a part of linear algebra and I am not even sure if it has any geometric basis, but I just have it. It's only potential use would be doing basic math with three different numbers at the same time.

## Parameters

- `o` - The vector to divide the current vector by

## Returns

A reference to the vector

## Example

```cpp
PVector v = PVector(1, 2, 3);
PVector o = PVector(2, 3, 4);

v.div(o);
/*
v.x == 2
v.y == 6
v.z == 12
*/
```

## See Also
