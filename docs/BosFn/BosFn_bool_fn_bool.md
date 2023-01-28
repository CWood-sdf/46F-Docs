---
    parent: BosFn
    layout: default
    grand_parent: Docs
    title: BosFn(bool (*fn)(bool))
---
# BosFn(bool (*fn)(bool))
A constructor for a function that pops itself off the BrainOS function list if it returns true.

## Parameters
* `fn` - The function to be called

## Explanation
Functions in C++ are sort of weird. They are (sort of) just pointers to a block of memory that contains the code for the function. Because of this, you can pass functions as parameters to other functions. The actual syntax for this is a bit weird, but it is very useful. The syntax is `bool (*fn)(bool)`. This means that the function takes a boolean parameter, and returns a boolean. The `*` means that the function is a pointer, and the `()` means that the function is a parameter. The `bool` before the `*` means that the function returns a boolean. The `bool` after the `()` means that the function takes a boolean parameter.

## Example
```cpp
void myBosFn(bool remake){
    //drawing code here
}
int main(){
    bosFns.pushBack(BosFn(myBosFn));
}
```
