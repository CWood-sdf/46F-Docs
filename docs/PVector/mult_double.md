---
    parent: PVector
    layout: default
    grand_parent: Docs
    title: mult(double)
---

# PVector& mult(double n)

This function does scalar multiplication on the vector (i.e. it multiplies all the terms by the parameter).

## Parameters

- `n` - The number to multiply the vector by.

## Returns

A reference to the vector

## Example

```cpp
PVector v = PVector(1, 2, 3);
v.mult(2);
/*
v.x == 2
v.y == 4
v.z == 6
*/
```

## See Also
