---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: incVals(double)
---
# void incVals(double val)
Updates the PIDF with the new sensor value. This should be called every iteration of the loop.

## Parameters
- `val` - The new sensor value

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
pidf.setTarget(10);
pidf.incVals(5);
```