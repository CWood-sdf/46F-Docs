---
    parent: PIDF
    layout: default
    grand_parent: Docs
    title: PIDF(double, double, double, double)
---
# PIDF(double kP, double kI, double kD, double kF)
Constructs a PIDF object with the `kP`, `kI`, `kD`, and `kF` values set to the values in the `kP`, `kI`, `kD`, and `kF` parameters.

## Parameters
- `kP` - The kP value
- `kI` - The kI value
- `kD` - The kD value
- `kF` - The kF value

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1, 0);
```