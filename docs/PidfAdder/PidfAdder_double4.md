---
    parent: PidfAdder
    layout: default
    grand_parent: Docs
    title: PidAdder(double, double, double, double = 0)
---
# PidAdder(double p, double i, double d, double f = 0)
Initializes all the values to the given values

## Parameters
- `p` - The P value
- `i` - The I value
- `d` - The D value
- `f` - The F value (default 0)

## Example
```cpp
PidAdder adder = PidAdder(1, 2, 3, 4);
cout << adder.p << ", " adder.i << ", " << adder.d << ", " << adder.f << endl;
//prints 1, 2, 3, 4
```