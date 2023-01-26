---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: addAfter(LinkedList)
---
# void addAfter(LinkedList list)
Copies the given list and adds all it's elements after the current node

## Parameter
- `list` - The list to add after the current node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6, 7};
list.moveCurrentRight();
list.moveCurrentRight();
//Current is now at the element 5
list.addAfter({10, 11, 12});
//list now contains 3, 4, 5, 10, 11, 12, 6, 7
```