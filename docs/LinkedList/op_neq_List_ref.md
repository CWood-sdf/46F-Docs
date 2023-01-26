---
    parent: LinkedList
    layout: docs
    grand_parent: Docs
    title: operator!=(List&amp;)
---
# bool operator!=(List&amp; list)
Returns true if the lists values are not all the same

## Parameter
- `list` - the list to compare the current list to

## Returns
A boolean that is true if the lists do not hold the same values, false otherwise

## Example
```cpp
LinkedList<int> list1 = {3, 4, 5};
LinkedList<int> list2 = {4, 5};
if(list1 != list2){
    //This branch will be executed
}
list1.pushBase(3);
if(list1 != list2){
    //This branch will not be executed
}