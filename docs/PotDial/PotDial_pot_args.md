---
    parent: PotDial
    layout: default
    grand_parent: Docs
    title: PotDial(pot&amp;, Args...)
---
# PotDial(pot&amp; sensor, Args... args)
This constructor creates a PotDial object with the given potentiometer sensor and arguments.

## Parameters
- `sensor` - The potentiometer sensor to use.
- `args` - The arguments for the private constructor

## Example
```cpp
//Creates a dial that will return values between 1 and 3, and will be used for a SelectorArr object
pot pot1 = pot(Brain.ThreeWirePort.A);
PotDial dial1 = PotDial(pot1, 3, true);
```