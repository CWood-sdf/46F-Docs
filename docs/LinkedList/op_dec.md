---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: operator--()
---
# Node&amp; operator--()

Moves the current node right, then returns the new current node

## Returns

A reference to the new current node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6};
++list;
++list;
//current is now at 4
--list;
//Returns the node at 4
//current is now the node at 4
