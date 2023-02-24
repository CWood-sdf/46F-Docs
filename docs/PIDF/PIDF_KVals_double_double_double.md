---
    parent: PIDF
    layout: default
    grand_parent: Docs
    title: PIDF(KVals, double, double, double)
---
# PIDF(KVals kVals, double maxIntegral, double integralZone, double integralZero)
Constructs a PIDF object with the `kP`, `kI`, `kD`, and `kF` values set to the values in the `kVals` struct. The `maxIntegral` is set to the `maxIntegral` parameter. The `integralZone` is set to the `integralZone` parameter. The `integralZero` is set to the `integralZero` parameter.

## Parameters
- `kVals` - The `KVals` struct
- `maxIntegral` - The maximum integral value (default -1)
- `integralZone` - The integral growth range (default -1)
- `integralZero` - The integral zero range (default -1)

## Example
```cpp
PIDF pidf = PIDF({1, 1, 1, 0}, 100, 10, 5);
```
