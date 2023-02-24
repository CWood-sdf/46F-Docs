---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: getCountOut()
---
# int getCountOut()
Returns the number of objects that have passed by, this does not include the object that is currently passing by. This function is useful for counting the number of objects that pass by.

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
cout << "Count before leaving: " << l.getCountOut() << endl;
while(l.pressing()){
    task::sleep(10);
}
cout << "Count after leaving: " << l.getCountOut() << endl;

//prints "Count before leaving: 0"
//prints "Count after leaving: 1"
```