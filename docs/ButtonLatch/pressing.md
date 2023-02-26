---
    parent: ButtonLatch
    layout: docs
    grand_parent: Docs
    title: pressing()
---
# bool pressing()
Returns true when the button is first pressed (ie the latch is set to true). 

## Example
```cpp
controller Controller = controller(primary);
ButtonLatch upLatch = ButtonLatch(Controller.ButtonUp);

while(true){
    if(upLatch.pressing()){
        cout << "Up button pressed" << endl;
    }
}
```