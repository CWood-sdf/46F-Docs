---
    parent: Encoder
    layout: docs
    grand_parent: Docs
    title: position(rotationUnits)
---
# double position(rotationUnits units)
Returns the position of the encoder in the specified units

## Parameters
- `units` - The units to return the position in

## Example
```cpp
rotation rot = rotation(PORT1);
Encoder enc = Encoder(rot);
enc.position(rotationUnits::deg); // returns the position of the encoder in degrees
```