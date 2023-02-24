---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: operator+=(PidAdder)
---
# PIDF&amp; operator+=(PidAdder adder)
Adds a PidAdder to the PIDF

## Parameters
- `adder` - The PidAdder to add

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
pidf += PidAdder(1, 1, 1);
cout << pidf << endl; //Prints 2, 2, 2, 0
```
