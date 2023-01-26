---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: pushBack(List)
---
# void pushBack(List list)
Copies then adds the list's values to the end of the list

## Parameter
- `list` - The list to add to the end of the list

## Example
```cpp
LinkedList<int> list = {3, 4, 5};
LinkedList<int> list2 = {6, 7, 8};
list.pushBack(list2);
//list now contains 3, 4, 5, 6, 7, 8
```