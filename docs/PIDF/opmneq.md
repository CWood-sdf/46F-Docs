---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: operator-=(PidAdder)
---
# PIDF&amp; operator-=(PidAdder adder)
Subtracts a PidAdder from the PIDF

## Parameters
- `adder` - The PidAdder to subtract

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1, 1);
pidf -= PidAdder(0.1, 0.2, 0.3, 0.4);
cout << pidf << endl; //Prints 0.9, 0.8, 0.7, 0.6
```
