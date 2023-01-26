---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: getEnd()
---

# Node& getEnd()

Returns a reference to the end node

## Returns

A reference to the end node

## Example

```cpp
LinkedList<int> l = {3, 4, 5, 6};
LinkedList<int>::Node& c1 = l.getEnd();
//c1 now contains a reference to the node that holds the value 6
int value = l.getEnd();
//value is 6
```
