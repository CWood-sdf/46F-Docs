---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: moveCurrentRight()
---
# void moveCurrentRight()

Moves the current node close to the end node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6};
list.setCurrent(list.getEnd());
//current is now at 6
list.moveCurrentRight();
//does nothing
list.setCurrent(list.getBase());
//current is now at 3
list.moveCurrentRight();
//current is now at 4
```