---
    parent: PotDial
    layout: default
    grand_parent: Docs
    title: PotDial(int, int, double, bool = true) [private]
---
# *\[private\]* PotDial(int tickAmount, int range, double baseValue, bool useForSelectorArray = true)
This constructor creates a PotDial object with the given tick amount, range, base value, and whether or not it should be used for a SelectorArr object.

## Parameters
- `tickAmount` - The amount of ticks the dial has.
- `range` - The range in degrees that the dial will return values in.
- `baseValue` - The base degree value of the dial to return values in.
- `useForSelectorArray` - Whether or not the dial should be used for a SelectorArr object.  

## Example
```cpp
//Creates a dial that will return values between 1 and 3, in the range of 10 to 80 degrees, and will be used for a SelectorArr object
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 70, 10, true);
```