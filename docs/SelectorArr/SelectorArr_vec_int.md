---
    parent: SelectorArr
    layout: default
    grand_parent: Docs
    title: SelectorArr(vector&lt;int>)
---
# SelectorArr(vector&lt;int> dialValues)
This constructor creates a SelectorArr object with the given dial values.

## Parameters
- `dialValues` - The values of the dials in the order they were created.

## Example
```cpp
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 100, true);
PotDial dial2 = PotDial(Brain.ThreeWirePort.B, 2, 100, true);

//Runs when dial1 is 1 and dial2 is 2
SelectorArr selector = SelectorArr({1, 2});
```