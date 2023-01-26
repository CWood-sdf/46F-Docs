---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: reset()
---
# void reset()

Moves the current node to the start of the list

## Example
```cpp
LinkedList<int> list = {3, 4, 5};
++list;
++list;
//Current is now at 5
list.reset();
//current is now at 3
```