---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: pushBase(PVector)
---
# void pushBase(PVector vec)
Adds a PVector to the beginning of the array

## Parameter
- `vec`: The PVector to add

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});
arr.pushBase(PVector(7, 8, 9));
//arr.arr = [[7, 8, 9], [1, 2, 3], [4, 5, 6]]
```
