---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: addAfter(T)
---
# void addAfter(T val)
Makes a new node from the given value and adds it after the current node
## Parameter
- `val` - The value to add after the current node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6, 7};
list.moveCurrentRight();
list.moveCurrentRight();
//Current is now at the element 5
list.addAfter(10);
//list now contains 3, 4, 5, 10, 6, 7
```