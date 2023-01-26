---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: addBefore(T)
---
# void addBefore(T val)
Makes a new node from the given value and before it after the current node
## Parameter
- `val` - The value to add before the current node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6, 7};
list.moveCurrentRight();
list.moveCurrentRight();
//Current is now at the element 5
list.addBefore(10);
//list now contains 3, 4, 10, 5, 6, 7
```