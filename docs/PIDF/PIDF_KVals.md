---
    parent: PIDF
    layout: default
    grand_parent: Docs
    title: PIDF(KVals)
---
# PIDF(KVals kVals)
Constructs a PIDF object with the `kP`, `kI`, `kD`, and `kF` values set to the values in the `kVals` parameter.

## Parameters
- `kVals` - The `KVals` struct

## Example
```cpp
PIDF pidf = PIDF({1, 1, 1, 0});
```