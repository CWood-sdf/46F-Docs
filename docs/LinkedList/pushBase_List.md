---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: pushBase(List)
---
# void pushBase(List list)
Copies then adds the list's values to the start of the list

## Parameter
- `list` - The list to add to the start of the list

## Example
```cpp
LinkedList<int> list = {3, 4, 5};
LinkedList<int> list2 = {6, 7, 8};
list.pushBase(list2);
//list now contains 6, 7, 8, 3, 4, 5
```