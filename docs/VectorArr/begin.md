---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: begin()
---
# \[iterator] begin()
Returns an iterator to the beginning of the array

## Returns
The deque iterator to the beginning of the array

## Example
```cpp
VectorArr arr({PVector(1, 2, 3), PVector(4, 5, 6)});

for(auto& i : arr) {
    std::cout << i << std::endl;
}
//Prints:
//{1, 2, 3}
//{4, 5, 6}
```