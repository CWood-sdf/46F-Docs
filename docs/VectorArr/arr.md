---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: arr
---
# deque&lt;PVector&gt; arr
The array of PVectors that this class wraps

## Explanation
I have left this public because VectorArr only implements functions for the most useful deque methods, thus you can use this variable to access the rest of the deque methods. However, I would recommend that you don't do this, as it will make your code less readable. If you want to use a method that isn't implemented in VectorArr, you can either make a pull request to add it, or you can just implement it yourself in your code.

## Example
```cpp
VectorArr arr1;
arr1.arr.push_back(PVector(1, 2, 3));