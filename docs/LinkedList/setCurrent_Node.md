---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: setCurrent(Node&amp;)
---
# void setCurrent(Node&amp; n)
Sets the current node to the given node, for this to work, the node must be in the list

## Parameter
- `n` - The node to set the current node to

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6};
list.moveCurrentRight();
list.moveCurrentRight();
//current is now 5
list.setCurrent(list.getBase());
//current is now 3
```
