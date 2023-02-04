---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: size()
---
# size_t size()
Returns the size of the array

## Returns
The size of the array

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});

std::cout << arr.size() << std::endl;
//Prints: 2
```