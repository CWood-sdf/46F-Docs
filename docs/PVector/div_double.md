---
    parent: PVector
    layout: docs
    grand_parent: Docs
    title: div(double)
---

# PVector& div(double n)

This function does scalar division on the vector (i.e. it divides all the terms by the parameter).

## Parameters

- `n` - The number to divide the vector by.

## Returns

A reference to the vector

## Example

```cpp
PVector v = PVector(1, 2, 3);
v.div(2);
/*
v.x == 0.5
v.y == 1
v.z == 1.5
*/
```

## See Also
