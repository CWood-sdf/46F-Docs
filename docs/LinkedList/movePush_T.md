---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: movePush(T&amp;)
---

# void movePush(T&amp; val)

Calls std::move on the value when adding it into the list.

{: .warning}
Do not use this function if you do not understand what std::move does.

## Parameters

- `val` - a reference to the value to add

## Example

```cpp
LinkedList<int> l = {3, 4, 5};
int v = 6;
l.push(v);
//l now contains {3, 4, 5, 6}
```
