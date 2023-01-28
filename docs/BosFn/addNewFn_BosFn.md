---
    parent: BosFn
    layout: docs
    grand_parent: Docs
    title: addNewFn(BosFn)
---
# static void addNewFn(BosFn fn)
Adds the given function to the BrainOS function list.

## Parameters
* `fn` - The function to be added

## Example
```cpp
void myBosFn(bool remake){
    //drawing code here
}
int main(){
    BosFn::addNewFn(myBosFn);
}
```