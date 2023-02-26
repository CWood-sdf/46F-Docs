---
    parent: PotDial
    layout: default
    grand_parent: Docs
    title: PotDial(triport::port&amp;, Args...)
---
# PotDial(triport::port&amp; port, Args... args)
This constructor creates a PotDial object with the given port and arguments.

## Parameters
- `port` - The port to use.
- `args` - The arguments for the private constructor

## Example
```cpp
//Creates a dial that will return values between 1 and 3, and in the range [10, 70] degrees, and will be used for a SelectorArr object
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 70, 10, true);
```