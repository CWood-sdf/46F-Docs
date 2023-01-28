---
    parent: BosFn
    layout: default
    grand_parent: Docs
    title: BosFn(void (*fn)(bool))
---
# BosFn(void (*fn)(bool))
A constructor for a function that is not popped off the BrainOS function list.

## Parameters
* `fn` - The function to be called

## Explanation
See the explanation for the [BosFn(bool (*fn)(bool))](BosFn_bool_fn_bool) constructor.

## Example
```cpp
void myBosFn(bool remake){
    //drawing code here
}
int main(){
    bosFns.pushBack(BosFn(myBosFn));
}
```
