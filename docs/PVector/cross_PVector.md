---
    parent: PVector
    layout: docs-math
    grand_parent: Docs
    title: cross(PVector)
---
# PVector cross(PVector v)
Gets the cross product of the current vector and the given vector. This function does not modify the current vector.

The cross product only works in 3D space, thus, I have not yet found a use for it in vex, though there could potentially be a use for vision tracking or something else. 

## Parameters
- `v` - The vector to get the cross product with

## Returns
A PVector representing the cross product of the current vector and the given vector

## Explanation
The cross product of two vectors is a vector that is perpendicular to both of them. It is defined as:

$ \vec{a} \times \vec{b} = (a_y b_z - a_z b_y)\vec{i} + (a_z b_x - a_x b_z)\vec{j} + (a_x b_y - a_y b_x)\vec{k}$

The cross product is a vector that is perpendicular to both of the vectors, and has a magnitude equal to the area of the parallelogram formed by the two vectors. For more information, see [this Wikipedia article](https://en.wikipedia.org/wiki/Cross_product).