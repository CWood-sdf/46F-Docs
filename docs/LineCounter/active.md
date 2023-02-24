---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: active()
---
# bool active()
Returns true when an object is within the field of view. 

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

while(true){
    if(l.active()){
        Brain.Screen.print("Object passing by");
    }
    task::sleep(10);
}
```