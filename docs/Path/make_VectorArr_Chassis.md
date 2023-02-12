---
    parent: Path
    layout: docs-math
    grand_parent: Docs
    title: make(VectorArr&amp;, Chassis*)
---
# void make(VectorArr&amp; arr, Chassis* chassis)
Makes a new path from the given set of bezier curve control points and the given chassis' speed constraints

{: .note}
This function is intended to be used by the [followPath](../WheelController/followPath_VectorArr_SpeedController) function, however it is exposed for public use. 

## Parameters
- `arr` - A reference to the control point array
- `chassis` - The Chassis object

## Explanation
This function first generates a bezier curve path, then generates target angles from the path derivative, and then generates smooth target speeds. The target speeds are generated first by using the curvature from the path, then they are smoothed from the max accellerations of the chassis using the equation:

$ v_f^2 = v_i^2 + 2ad $

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
```