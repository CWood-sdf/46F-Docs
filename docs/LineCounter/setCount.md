---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: setCount(int)
---
# void setCount(int count)
Sets the LineCounter count to `count`.

{: .note}
If the line counter is being presseed, then the countIn will be set to `count + 1`.

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

l.setCount(3);

cout << "Count: " << l.getCountOut() << endl;
//prints "Count: 3"
```