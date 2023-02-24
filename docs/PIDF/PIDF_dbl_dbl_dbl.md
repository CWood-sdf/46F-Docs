---
    parent: PIDF
    layout: default
    grand_parent: Docs
    title: PIDF(double, double, double)
---
# PIDF(double kP, double kI, double kD)
Constructs a PIDF object with the `kP`, `kI`, and `kD` values set to the values in the `kP`, `kI`, and `kD` parameters.

## Parameters
- `kP` - The kP value
- `kI` - The kI value
- `kD` - The kD value

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
```