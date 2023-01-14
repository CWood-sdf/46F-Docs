---
    parent: PVector
    layout: docs
    grand_parent: Docs
    title: limit(double)
---
# PVector& limit(double max)
This function limits the magnitude of the vector to the value used for the max parameter. This function acts on the vector directly and does not return a new vector. I have no idea if this function is at all useful, but it is here if you need it.

## Parameters
- `max` - The maximum magnitude for the vector

## Returns
A reference to the vector

## Example
```cpp
PVector v = PVector(3, 4);
v.limit(5);
/*
v.x == 3
v.y == 4
*/
v.limit(3);
/*
v.x == 1.8
v.y == 2.4
*/
```


