---
    parent: PIDF
    layout: default
    grand_parent: Docs
    title: PIDF(double, double, double, double, double, double)
---
# PIDF(double kP, double kI, double kD, double maxIntegral, double integralZone, double integralZero)
Constructs a PIDF object with the `kP`, `kI`, and `kD` values set to the values in the `kP`, `kI`, and `kD` parameters. The `maxIntegral` is set to the `maxIntegral` parameter. The `integralZone` is set to the `integralZone` parameter. The `integralZero` is set to the `integralZero` parameter.

## Parameters
- `kP` - The kP value
- `kI` - The kI value
- `kD` - The kD value
- `maxIntegral` - The maximum integral value (default -1)
- `integralZone` - The integral growth range (default -1)
- `integralZero` - The integral zero range (default -1)

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1, 100, 10, 5);
```
