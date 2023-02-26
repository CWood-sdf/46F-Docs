---
    parent: SelectorArr
    layout: docs
    grand_parent: Docs
    title: getVal()
---
# function&lt;void()&gt; getVal()
Returns the auton function to be run given the current state of the dials. 

## Inner Workings
This function gets the values of all the PotDials that are used for the SelectorArr, then returns the auton function that corresponds to those values. If there is no matching function, it prints an error message including the values of the dials, and the possible values of the dials, then returns a function that does nothing.

## Example
```cpp
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 100, true);

//Runs when dial1 is 1
SelectorArr selector = SelectorArr({1}, [](){
    Brain.Screen.print("Auton 1");
});

//Runs when dial1 is 2
SelectorArr selector2 = SelectorArr({2}, [](){
    Brain.Screen.print("Auton 2");
});

//Runs when dial1 is 3
SelectorArr selector3 = SelectorArr({3}, [](){
    Brain.Screen.print("Auton 3");
});

//Runs the auton function for the current dial values
selector.getVal()();
```