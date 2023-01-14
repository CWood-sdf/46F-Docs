---
    parent: PVector
    layout: docs-math
    grand_parent: Docs
    title: dot(PVector)
---
# double dot(PVector v)
Gets the dot product of this vector with another vector. The dot product is the sum of the products of the corresponding entries of the two vectors. 

## Parameters
- `v` - The vector to dot with

## Returns
The dot product of the two vectors

## Explanation
The dot product is a very useful operation in linear algebra. It is used to find the angle between two vectors. It is also used to find the projection of one vector onto another.
It's pretty simple to actually calculate:

$ \vec{v_1} \cdot \vec{v_2} = x_1x_2 + y_1y_2 + z_1z_2 $

In my opinion, the most useful application of the dot product is the fact that the dot product is negative if the two vectors are pointing in opposite directions. This is useful for determining if two vectors are pointing in the same direction or not. For more information on the dot product, check out [this](https://en.wikipedia.org/wiki/Dot_product) wikipedia article.

## Example
```cpp
PVector v = PVector(1, 2, 3);
PVector v2 = PVector(4, 5, 6);
v.dot(v2); // Returns 32
```

## See Also
- [cross(PVector)](cross_PVector)
- [angleBetween(PVector)](angleBetween_PVector)