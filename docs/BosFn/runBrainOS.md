---
    parent: BosFn
    layout: docs
    grand_parent: Docs
    title: runBrainOS()
---
# static void runBrainOS()
Runs the BrainOS function list. 

This function runs an infinite loop, so it is designed to be put in a thread. 

## Example
```cpp
void myBosFn(bool remake){
    //drawing code here
}
int main(){
    BosFn::addNewFn(myBosFn);
    thread brainOSThread = thread(BosFn::runBrainOS);
}
```
