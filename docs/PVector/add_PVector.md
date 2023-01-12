---
    title: add(PVector)
    parent: PVector
    layout: default
    grand_parent: Docs
---
# PVector& add(PVector other)
Adds the components of the `other` vector to the vector that is operated on. This function is equivalent to using the [operator+=](op_pleq_PVector) function. 

This function returns a reference to the vector that the function was called on to use in chaining. 

## Parameters
- `other` - The vector to add to the current vector

## Examples
```cpp
PVector v = PVector(1, 2);
PVector o = PVector(3, 4, 5);

v.add(o);
/*
v.x == 4
v.y == 6
v.z == 5
*/
```

## See Also