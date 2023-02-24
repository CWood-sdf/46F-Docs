---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: setTarget(double)
---
# void setTarget(double target)
Sets the target of the PIDF. This is the value that the PIDF will try to reach.

## Parameters
- `target` - The target value

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
pidf.setTarget(10);
```