---
    parent: BosFn
    layout: docs
    grand_parent: Docs
    title: useTransparentScreenSwitchButtons()
---
# static void useTransparentScreenSwitchButtons()
Sets the BrainOS screen switch buttons to be transparent when not pressed

{: .note}
This function MUST be called before the BrainOS thread is started, or it will not work.

## Example
```cpp
void myBosFn(bool remake){
    //drawing code here
}
int main(){
    BosFn::addNewFn(myBosFn);
    BosFn::useTransparentScreenSwitchButtons();
    thread brainOSThread = thread(BosFn::runBrainOS);
}
```