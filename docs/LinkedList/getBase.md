---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: getBase()
---

# Node& getBase()

Returns a reference to the first node

## Returns

A reference to the first node

## Example

```cpp
LinkedList<int> l = {3, 4, 5, 6};
LinkedList<int>::Node& c1 = l.getBase();
//c1 now contains a reference to the node that holds the value 3
int value = l.getBase();
//value is 3
```
