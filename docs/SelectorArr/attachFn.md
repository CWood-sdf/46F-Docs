---
    parent: SelectorArr
    layout: docs
    grand_parent: Docs
    title: attachFn(function&lt;void()&gt;)
---
# void attachFn(function&lt;void()&gt; autonFunction)
Sets the auton function for the selector. 

## Parameters
- `autonFunction` - The function that should be run when the dials are set to the given values.

## Example
```cpp
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 100, true);

//Runs when dial1 is 1
SelectorArr selector = SelectorArr({1});

selector.attachFn([](){
    Brain.Screen.print("Auton 1");
});
```