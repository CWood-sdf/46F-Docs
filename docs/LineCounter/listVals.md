---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: listVals()
---
# static void listVals(bool)
Prints the values of all the existing line counters to the brain. 

This function is designed to be used with the BrainOS management system. 

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

BosFn::addNewFn(LineCounter::listVals);

```