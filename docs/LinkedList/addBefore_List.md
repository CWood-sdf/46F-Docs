---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: addBefore(LinkedList)
---
# void addBefore(LinkedList list)
Copies the given list and adds all it's elements before the current node

## Parameter
- `list` - The list to add before the current node

## Example
```cpp
LinkedList<int> list = {3, 4, 5, 6, 7};
list.moveCurrentRight();
list.moveCurrentRight();
//Current is now at the element 5
list.addBefore({10, 11, 12});
//list now contains 3, 4, 10, 11, 12, 5, 6, 7
```