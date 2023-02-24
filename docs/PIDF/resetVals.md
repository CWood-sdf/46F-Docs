---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: resetVals()
---
# void resetVals()
Clears the integral and derivative values of the PIDF. This is for when you are switching between different targets and want to start the PIDF from scratch.

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
pidf.setTarget(10);
pidf.incVals(5);
pidf.resetVals();
pidf.setTarget(20);
pidf.incVals(5);
```