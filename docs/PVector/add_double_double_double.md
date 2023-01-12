---
    title: add(double, double, double)
    parent: PVector
    layout: default
    grand_parent: Docs
---

# PVector& add(double x, double y, double z = 0.0)

This function adds the parameters to the x, y, and z components, respectively. This is pretty simple, it is just vector addition. I would recommend against using this function in favor of the [operator+=](op_pleq_PVector) function. Stylistically however, I think it is disgusting to call an operator function on a pointer, thus this would be nice to use on a pointer.

This function defaults the z value to 0.

## Parameters

- `x` - The number to add to the vector's x component
- `y` - The number to add to the vector's y component
- `z` - The number to add to the vector's z component

## Returns

A reference to the vector

## Example

```cpp
PVector v = PVector(1, 2);

v.add(1, 5, 4);
/*
v.x == 2
v.y == 7
v.z == 4
*/

v.add(1, 1);
/*
v.x == 3
v.y == 8
v.z == 4
*/
```

## See Also
