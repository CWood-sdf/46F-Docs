---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: getVal(double)
---
# double getVal(double value)
This function calls `incVals()` with value, then returns `getVal()` so it functions as a 2 in 1 function.

## Parameters
- `value` - The speed value

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1, 0.01);
pidf.setTarget(10);
cout << pidf.getVal(5) << endl; //Prints 15.1
```