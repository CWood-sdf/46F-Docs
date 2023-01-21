---
    parent: LinkedList
    layout: default
    grand_parent: Docs
    title: LinkedList(LinkedList&amp;&amp;)
---

# LinkedList(LinkedList&amp;&amp; list)

Copies the elements of the given parameter into the new list

## Parameter

- `list` - The list to copy the elements from

## Example

```cpp
LinkedList<int> list = LinkedList<int>(LinkedList<int>(3, 4, 5));
//list now holds the values 3, 4, and 5
```
