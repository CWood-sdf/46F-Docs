---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: dissolve()
---

# void dissolve()

This function unties the list from the current, head, and tail pointers WITHOUT deleting them.

{: .warning}
This function should be used only after calling [joinTo()](joinTo_List.md) on the list, otherwise memory leaks will be coming your way.

## Example

```cpp
LinkedList<int> list1 = {3, 4, 5};
LinkedList<int> list2 = {2, 3};
list2.joinTo(list1);
//list2 and list1 now both share the {3, 4, 5}, however, list1 is the owner of the memory and
//  will delete the memory if list1 goes out of scope
list2.dissolve();
//Calling list1.dissolve() instead of the above line would cause a memory leak
//But anyway, list2 is now empty

```
