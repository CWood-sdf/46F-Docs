---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: begin()
---

# Iterator begin()

Returns an iterator to the start of the list, and resets the current pointer to the start of the list.

{: .note}
This function is not meant to be called by the user, instead this function should be implicitly used by range-for loops.

## Returns

An iterator to the start of the list

## Example

```cpp
LinkedList<int> list = {3, 4, 5, 6};

//Basically useless usage
Iterator i = list.begin();

for(int& value : list){
    std::cout << value << ", ";
}
//Prints: "3, 4, 5, 6, "
```
