---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: find(T)
---

# Node& find(T val)

Returns a reference to the first node that has a value that is equivalenet to the given parameter

## Parameter

- `val` - the value to find in the list

## Returns

A reference to the node with the value

## Example

```cpp
LinkedList<int> list = {4, 5, 6};
list.find(5);
//returns a reference to the node containing 5
list.find(5).getNext();
//returns a reference to the node containing 6
list.find(2).exists();
//returns false
```
