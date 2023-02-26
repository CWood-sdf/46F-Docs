---
    parent: PotDial
    layout: docs
    grand_parent: Docs
    title: getAmnt()
---
# int getAmnt()
Returns the current tick value that the dial is on.

## Example
```cpp
//Creates a dial that will return values between 1 and 3, in the range of 0 to 80 degrees, and will be used for a SelectorArr object
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 80, false);

//Prints the current tick value of the dial
cout << dial1.getAmnt();
```