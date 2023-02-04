---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: operator[](int)
---
# PVector& operator\[](int index)
Returns a reference to the PVector at the specified index

## Parameter
- `index`: The index of the PVector to return

## Returns
The PVector at the specified index

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});
arr[0] = PVector(7, 8, 9);
//arr.arr = [[7, 8, 9], [4, 5, 6]]
```