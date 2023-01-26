---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: pushBase(Node&amp;)
---
# void pushBase(Node&amp; node)
Copies then adds the node's value to the end of the list

## Parameter
- `node` - The node to add to the end of the list

## Example
```cpp
LinkedList<int> list = {3, 4, 5};
LinkedList<int> list2 = {6, 7, 8};
list2.moveCurrentRight();
list.pushBase(list2.getCurrent());
//list now contains 7, 3, 4, 5
```