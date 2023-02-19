---
    parent: TrackingWheel
    layout: default
    grand_parent: Docs
    title: TrackingWheel(int32_t, bool, double)
---
# TrackingWheel(int32_t port, bool reversed, double diameter)
Constructs a new TrackingWheel object using a rotation sensor, a boolean for if the sensor is reversed, and a diameter for the wheel.

## Parameters
- `port` - The port of the rotation sensor.
- `reversed` - If the sensor angles should be reversed. (i.e. if the sensor is mounted upside down)
- `diameter` - The diameter of the wheel in inches.

## Example
```cpp
TrackingWheel forwardWheel(PORT1, false, 2.77); // a 2.75 omni, but 2.77 is a better approximation because of some random factor or something
// you should test this yourself to get the best value (just check the odometry values and see if they are correct)
```