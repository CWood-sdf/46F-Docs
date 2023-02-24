---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: getVal()
---
# double getVal()
Returns the current speed value of the PIDF

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1, 0.01);
pidf.setTarget(10);
pidf.incVals(5);
cout << pidf.getVal() << endl; //Prints 15.1
```