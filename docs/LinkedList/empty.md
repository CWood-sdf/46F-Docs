---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: empty()
---
# bool empty()

Returns true if the list has no elements

## Returns
A boolean that is true if the list is empty, false otherwise

## Example
```cpp
LinkedList<int> list = {};
list.empty();
//returns true
list.pushBack(3);
list.empty();
//returns false
```