---
    parent: PotDial
    layout: default
    grand_parent: Docs
    title: PotDial(int, bool) [private]
---
# *\[private\]* PotDial(int tickAmount, bool useForSelectorArray) 
This constructor creates a PotDial object with the given tick amount and whether or not it should be used for a SelectorArr object.

## Parameters
- `tickAmount` - The amount of ticks the dial has.
- `useForSelectorArray` - Whether or not the dial should be used for a SelectorArr object.

## Example
```cpp
//Creates a dial that will return values between 1 and 3, and will be used for a SelectorArr object
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, true);
```
