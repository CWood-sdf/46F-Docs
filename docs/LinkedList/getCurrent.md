---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: getCurrent()
---

# Node& getCurrent()

Returns a reference to the current node

## Returns

A reference to the current node

## Example

```cpp
LinkedList<int> l = {3, 4, 5, 6};
LinkedList<int>::Node& c1 = l.getCurrent();
//c1 now contains a reference to the node that holds the value 3
l.moveCurrentRight();
LinkedList<int>::Node& c2 = l.getCurrent();
//c2 now contains a reference to the node that holds the value 4
```
