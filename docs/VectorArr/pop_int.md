---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: pop(int)
---
# void pop(int index)
Removes the PVector at the specified index

## Parameter
- `index`: The index of the PVector to remove

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});
arr.pop(0);
//arr.arr = [[4, 5, 6]]
```