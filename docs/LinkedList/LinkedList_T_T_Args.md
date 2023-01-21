---
    parent: LinkedList
    layout: default
    grand_parent: Docs
    title: LinkedList(T, T, Args...)
---

# LinkedList(T el1, T el2, Args... els)

Constructs a list with at least two elements

## Parameters

- `el1` - the first element of the new list
- `el2` - the second element of the list
- `els` - as many extra elements as you want, however each argument must be convertible to T

## Example

```cpp
LinkedList<int> list = LinkedList<int>(3, 4, 5, 6, 7, 8);
//list now holds 3, 4, 5, 6, 7, and 8
```
