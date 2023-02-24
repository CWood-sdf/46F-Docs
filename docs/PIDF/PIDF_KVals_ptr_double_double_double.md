---
    parent: PIDF
    layout: default
    grand_parent: Docs
    title: PIDF(KVals, std::shared_ptr&lt;PIDF_Extension&gt;, double = -1, double = -1, double = -1)
---
# PIDF(KVals kVals, std::shared_ptr&lt;PIDF_Extension&gt; extension, double maxIntegral = -1, double integralZone = -1, double integralZero = -1)
Constructs a PIDF object with the `kP`, `kI`, `kD`, and `kF` values set to the values in the `kVals` struct. The `extension` is set to the `extension` parameter. The `maxIntegral` is set to the `maxIntegral` parameter. The `integralZone` is set to the `integralZone` parameter. The `integralZero` is set to the `integralZero` parameter.

## Parameters
- `kVals` - The `KVals` struct
- `extension` - The `PIDF_Extension` object
- `maxIntegral` - The maximum integral value (default -1)
- `integralZone` - The integral growth range (default -1)
- `integralZero` - The integral zero range (default -1)

## Example
```cpp
struct MyExtension : public PIDF_Extension {
    double getVal(double value) {
        if(value > 100) {
            value = 100;
        }
        return value;
    }
};
PIDF pidf = PIDF({1, 1, 1, 0}, std::make_shared<MyExtension>(), 100, 10, 5);
```
