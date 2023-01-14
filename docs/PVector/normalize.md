---
    parent: PVector
    layout: docs-math
    grand_parent: Docs
    title: normalize()
---
# PVector& normalize()
Make the vector a unit length vector (1 unit in length) in the 2d plane. This function acts on the vector directly and does not return a new vector.

## Returns
A reference to the vector

## Explanation
Normalizing a vector sets its length to 1 while maintaining its direction. This is a very useful operation in physics engines and 3D graphics. I haven't really found a great use for them in vex, but I am sure it exists. 
The actual process of normalizing a vector is to divide the vector by its magnitude. This is done by dividing the x and y components by the magnitude:

```cpp
x = x / mag();
y = y / mag();
```

## Example
```cpp
PVector v = PVector(3, 4);
v.normalize();
/*
v.x == 0.6
v.y == 0.8
*/
```

## See Also
