---
    parent: PVector
    layout: docs
    grand_parent: Docs
    title: normalize3D()
---
# PVector& normalize3D()
Make the vector a unit length vector (1 unit in length) in 3d space. This function acts on the vector directly and does not return a new vector.

## Returns
A reference to the vector

## Explanation
Normalizing a vector sets its length to 1 while maintaining its direction. This is a very useful operation in physics engines and 3D graphics. I haven't really found a great use for them in vex, but I am sure it exists. 
The actual process of normalizing a vector is to divide the vector by its magnitude. This is done by dividing the x, y, and z components by the magnitude:

```cpp
x = x / dist3D();
y = y / dist3D();
z = z / dist3D();
```

## Example
```cpp
PVector v = PVector(3, 4, 5);
v.normalize3D();
/*
v.x == 3/sqrt(50)
v.y == 4/sqrt(50)
v.z == 5/sqrt(50)
*/
```

## See Also
