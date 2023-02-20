---
    parent: Positioner
    layout: default
    grand_parent: Docs
    title: Positioner(vector&lt;TrackingWheel&gt;, vector&lt;TrackingWheel&gt;, Inertial, PVector)
---
# Positioner(vector&lt;TrackingWheel&gt; xTrackingWheels, vector&lt;TrackingWheel&gt; yTrackingWheels, Inertial sensor, PVector offset)
The constructor for the `Positioner` class. This constructor takes in the tracking wheels, the inertial sensor, and the offset of the tracking wheel center from the center of the robot. The offset is used to calculate the position of the robot.

## Parameters
- `xTrackingWheels` - The tracking wheels in the x direction.
- `yTrackingWheels` - The tracking wheels in the y direction.
- `sensor` - The inertial sensor.
- `offset` - The offset of the tracking wheel center from the center of the robot.

## Example
```cpp
vector<TrackingWheel> xTrackingWheels = {TrackingWheel(PORT1, false, 2.75)};
vector<TrackingWheel> yTrackingWheels = {TrackingWheel(PORT2, false, 2.75)};
Inertial sensor = Inertial(PORT3, 355, 355);
PVector offset = PVector(0, 0);

Positioner positioner = Positioner(xTrackingWheels, yTrackingWheels, sensor, offset);
```