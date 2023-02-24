---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: firstHit()
---
# bool firstHit()
This function returns true when the function is called for the first time while an object is passing by. Once the object finishes passing by, this function will return true again the next time an object passes by. This function is useful for counting the number of objects that pass by. This function is kinda like a button latch for the line counter.

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

while(true){
    if(l.firstHit()){
        Brain.Screen.print("Object passing by");
    }
    task::sleep(10);
}
```