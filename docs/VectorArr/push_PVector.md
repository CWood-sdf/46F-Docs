---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: push(PVector)
---
# void push(PVector vec)
Adds a PVector to the end of the array

## Parameter
- `vec`: The PVector to add

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});
arr.push(PVector(7, 8, 9));
//arr.arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
```