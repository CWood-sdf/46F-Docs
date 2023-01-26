---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: popCurrentNext()
---
# void popCurrentNext()
Removes the current node, then shifts the current node right by 1

## Example
```cpp
LinkedList<int> list = {3, 4, 5};
list.moveCurrentRight();
list.popCurrentNext();
//list now contains {3, 5}
//the current node is now on 5
```