---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: moveCurrentLeft()
---
# void moveCurrentLeft()

Moves the current node close to the base node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6};
list.setCurrent(list.getEnd());
//current is now at 6
list.moveCurrentLeft();
//current is now at 5
list.setCurrent(list.getBase());
//current is now at 3
list.moveCurrentLeft();
//does nothing
```