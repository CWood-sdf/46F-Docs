---
    parent: TrackingWheel
    layout: default
    grand_parent: Docs
    title: TrackingWheel(Encoder&amp;, bool, double)
---
# TrackingWheel(Encoder&amp; e, bool reversed, double diameter)
Makes a new tracking wheel object with the given [Encoder](../Encoder/) and diameter.

## Parameters
- `e` - The encoder to use for the tracking wheel.
- `reversed` - Whether the encoder is reversed.
- `diameter` - The diameter of the tracking wheel in inches.

## Example
```cpp
// Create an encoder on a rotation sensor
rotation rot = rotation(PORT1);
Encoder e(rot);
// Create a tracking wheel object with a 3.25" diameter wheel
TrackingWheel trackingWheel(e, false, 3.25);
```