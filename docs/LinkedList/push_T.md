---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: push(T&amp;)
---

# void push(T&amp; val)

Adds a reference to the value to the end of the list, if the list is not storing references, the value will be copied.

## Parameters

- `val` - a reference to the value to add

## Example

```cpp
LinkedList<int> l = {3, 4, 5};
int v = 6;
l.push(v);
//l now contains {3, 4, 5, 6}
```
