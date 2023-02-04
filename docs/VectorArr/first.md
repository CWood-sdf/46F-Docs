---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: first()
---
# PVector&amp; first()
Returns the first PVector in the array

## Returns
A reference to the first PVector in the array

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});
arr.first() += PVector(1, 1, 1);
//arr.arr = [[2, 3, 4], [4, 5, 6]]
```
