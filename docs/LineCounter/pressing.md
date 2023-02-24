---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: pressing()
---
# bool pressing()
Returns true when an object is within the field of view and is currently passing by.

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

while(true){
    if(l.pressing()){
        Brain.Screen.print("Object passing by");
    }
    task::sleep(10);
}
```
