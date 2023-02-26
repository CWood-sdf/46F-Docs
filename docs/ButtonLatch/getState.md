---
    parent: ButtonLatch
    layout: docs
    grand_parent: Docs
    title: getState()
---
# int getState()
Returns the state value of the button latch.

## Example
```cpp
controller Controller = controller(primary);
ButtonLatch upLatch = ButtonLatch(Controller.ButtonUp, 4);

while(true){
    if(upLatch.pressing()){
        switch(upLatch.getState()){
        case 1:
            cout << "State 1" << endl;
            break;
        case 2:
            cout << "State 2" << endl;
            break;
        case 3:
            cout << "State 3" << endl;
            break;
        case 4:
            cout << "State 4" << endl;
            break;
        }
    }
}
```