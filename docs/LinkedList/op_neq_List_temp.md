---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: operator!=(List&amp;&amp;)
---
# bool operator==(List&amp;&amp; list)
Returns true if the lists values are not all the same

## Parameter
- `list` - the list to compare the current list to

## Returns
A boolean that is true if the lists do not hold the same values, false otherwise

## Example
```cpp
LinkedList<int> list1 = {3, 4, 5};
if(list1 != {4, 5}){
    //This branch will be executed
}
if(list1 != {3, 4, 5}){
    //This branch will not be executed
}