---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: last()
---
# PVector&amp; last()
Returns the last PVector in the array

## Returns
A reference to the last PVector in the array

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});

arr.last() += PVector(1, 1, 1);
//arr.arr = [[1, 2, 3], [5, 6, 7]]
```