---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: reset()
---
# void reset()
Sets the LineCounter count to 0.

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

while(true){
    if(l.firstHit()){
        Brain.Screen.print("Object passing by");
        break;
    }
    task::sleep(10);
}
while(l.pressing()){
    task::sleep(10);
}
cout << "Count before reset: " << l.getCountOut() << endl;
l.reset();
cout << "Count after reset: " << l.getCountOut() << endl;
//prints "Count before reset: 1"
//prints "Count after reset: 0"
```