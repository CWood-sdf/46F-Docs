---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: pushBack(Node&amp;)
---
# void pushBack(Node&amp; node)
Copies then adds the node's value to the end of the list

## Parameter
- `node` - The node to add to the end of the list

## Example
```cpp
LinkedList<int> list = {3, 4, 5};
LinkedList<int> list2 = {6, 7, 8};
list2.moveCurrentRight();
list.pushBack(list2.getCurrent());
//list now contains 3, 4, 5, 7
```