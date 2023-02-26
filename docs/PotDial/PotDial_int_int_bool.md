---
    parent: PotDial
    layout: default
    grand_parent: Docs
    title: PotDial(int, int, bool) [private]
---
# *\[private\]* PotDial(int tickAmount, int range, bool useForSelectorArray)
This constructor creates a PotDial object with the given tick amount, range, and whether or not it should be used for a SelectorArr object.

## Parameters
- `tickAmount` - The amount of ticks the dial has.
- `range` - The range in degrees that the dial will return values in.
- `useForSelectorArray` - Whether or not the dial should be used for a SelectorArr object.

## Example
```cpp
//Creates a dial that will return values between 1 and 3, in the range of 0 to 80 degrees, and will be used for a SelectorArr object
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 80, true);
```