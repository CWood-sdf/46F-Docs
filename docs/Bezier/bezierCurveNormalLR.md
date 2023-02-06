---
    parent: Bezier
    layout: default
    grand_parent: Docs
    title: bezierCurveNormalLR(VectorArr, double = 1, double = 0.02)
---
# pair&lt;VectorArr, VectorArr> bezierCurveNormalLR(VectorArr controlPoints, double distance = 1, double t = 0.02)
Returns the left and right normal curves of the bezier curve defined by the control points.

## Parameters
- `controlPoints` - The list of control points to make the curve from
- `distance` - The distance to offset the normal curves by
- `t` - The number to increment t by. The default is 0.02

## Returns
A pair of lists of points on the left and right normal curves

## Comments
I have no idea if this function is actually useful or even if it works, but it's here anyway. It should work, but I've never used it. I think it could be used to make a path area for the robot to follow and stay in, rather than just a path.

## Example
```cpp
VectorArr controlPoints = {PVector(0, 0), PVector(0, 1), PVector(1, 1)};
pair<VectorArr, VectorArr> curves = bezierCurveNormalLR(controlPoints, 0.1, 0.02);
```