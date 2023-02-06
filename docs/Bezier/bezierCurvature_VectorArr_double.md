---
    parent: Bezier
    layout: default
    grand_parent: Docs
    title: bezierCurvature(VectorArr, double = 0.02)
---
# vector&lt;double> bezierCurvature(VectorArr controlPoints, double t = 0.02)
Returns an array of the curvature at each point of the bezier curve defined by the parameters

## Parameters
- `controlPoints` - The list of control points to make the curve from
- `t` - The number to increment t by. The default is 0.02

## Returns
An array containing the curvature at each point of the curve

## Explanation
Curvature is a measure of how tight a curve is at a point. It is equivalent to the radius of the circle tangent to the curve at that point. My curvature formula uses a weird implementation from page 7 of the [pure pursuit paper](https://www.chiefdelphi.com/t/paper-implementation-of-the-adaptive-pure-pursuit-controller/166552). I use curvature in my drive code to limit the robot speed around tight turns.

## Example
```cpp
VectorArr controlPoints = {PVector(0, 0), PVector(0, 1), PVector(1, 1)};
auto curvatures = bezierCurvature(controlPoints);
```