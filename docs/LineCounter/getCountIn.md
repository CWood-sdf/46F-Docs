---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: getCountIn()
---
# int getCountIn()
Returns that number of objects that have passed by, this includes the object that is currently passing by. This function is useful for counting the number of objects that pass by.

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

l.reset();
while(true){
    if(l.firstHit()){
        Brain.Screen.print("Object passing by");
        break;
    }
    task::sleep(10);
}
cout << "Count before leaving: " << l.getCountIn() << endl;
while(l.pressing()){
    task::sleep(10);
}
cout << "Count after leaving: " << l.getCountIn() << endl;

//prints "Count before leaving: 1"
//prints "Count after leaving: 1"
```
