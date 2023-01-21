---
    parent: LinkedList
    layout: default
    grand_parent: Docs
    title: LinkedList(const LinkedList&lt;T>&amp;)
---

# LinkedList(const LinkedList&lt;T>&amp; list)

Copies the elements of the given parameter into the new list.

## Parameter

- `list` - The list to copy the elements of

## Example

```cpp
LinkedList<int> list1 = {3, 4, 5, 6, 7};
LinkedList<int> list2 = LinkedList<int>(list1);
//list2 now holds 3, 4, 5, 6, and 7
```
