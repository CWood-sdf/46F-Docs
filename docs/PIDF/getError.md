---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: getError()
---
# double getError()
Returns the error of the PIDF. This is the difference between the target and the current value.

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
pidf.setTarget(10);
pidf.incVals(5);
cout << pidf.getError() << endl; //Prints 5
```