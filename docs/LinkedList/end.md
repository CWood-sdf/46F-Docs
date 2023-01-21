---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: end()
---

# Node\* end()

Returns a pointer to the end node.

{: .note}
This function should be implicitly used by range-for loops, it is not meant to be called direclty by the user.

## Returns

A pointer to the end node.

## Example

```cpp
LinkedList<int> list = {3, 4, 5, 6};

//Basically useless version
LinkedList::Node* n = list.end();

//More useful version
for(int& v : list){
    std::cout << value << ", ";
}
//Prints: "3, 4, 5, 6, "
```
