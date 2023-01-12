---
    parent: PVector
    layout: default
    grand_parent: Docs
    title: sub(double, double, double)
---

# PVector& sub(double x, double y, double z = 0.0)

This function subtracts the parameters from the x, y, and z components, respectively. This is pretty simple, it is just vector subtraction. See the [add(double, double, double)](add_double_double_double) page for my recommendations on when to use this function.

This function defaults the z value to 0.

## Parameters

- `x` - The number to subtract from the vector's x component
- `y` - The number to subtract from the vector's y component
- `z` - The number to subtract from the vector's z component

## Returns

A reference to the vector

## Example

```cpp
PVector v = PVector(1, 2);

v.sub(1, 5, 4);
/*
v.x == 0
v.y == -3
v.z == -4
*/

v.add(1, 1);
/*
v.x == -1
v.y == -4
v.z == -4
*/
```

## See Also
