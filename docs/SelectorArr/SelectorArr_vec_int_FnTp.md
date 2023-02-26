---
    parent: SelectorArr
    layout: default
    grand_parent: Docs
    title: SelectorArr(vector&lt;int&gt;, function&lt;void()&gt;)
---
# SelectorArr(vector&lt;int&gt; dialValues, function&lt;void()&gt; autonFunction)
This constructor creates a SelectorArr object with the given dial values and auton function.

## Parameters
- `dialValues` - The values of the dials in the order they were created.
- `autonFunction` - The function that should be run when the dials are set to the given values.

## Example
```cpp
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 100, true);
PotDial dial2 = PotDial(Brain.ThreeWirePort.B, 2, 100, true);

//Runs when dial1 is 1 and dial2 is 2
SelectorArr selector = SelectorArr({1, 2}, [](){
    Brain.Screen.print("Auton 1");
});

//Runs when dial1 is 1 and dial2 is 3
SelectorArr selector2 = SelectorArr({1, 3}, [](){
    Brain.Screen.print("Auton 2");
});

//Runs when dial1 is 2 and dial2 is 2
SelectorArr selector3 = SelectorArr({2, 2}, [](){
    Brain.Screen.print("Auton 3");
});
```