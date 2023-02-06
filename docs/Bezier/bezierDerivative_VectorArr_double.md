---
    parent: Bezier
    layout: default
    grand_parent: Docs
    title: bezierDerivative(VectorArr, double = 0.02)
---
# VectorArr bezierDerivative(VectorArr controlPoints, double t = 0.02)
Returns the derivative curve of the bezier curve defined by the control points.

## Parameters
- `controlPoints` - The list of control points to make the curve from
- `t` - The number to increment t by. The default is 0.02

## Returns
A list of points on the derivative curve

## Explanation
Uses an implementation of the forward mode AutoDiff algorithm described [here](https://thenumb.at/Autodiff/)

## Example
```cpp
VectorArr controlPoints = {PVector(0, 0), PVector(0, 1), PVector(1, 1)};
VectorArr curve = bezierDerivative(controlPoints);
```
