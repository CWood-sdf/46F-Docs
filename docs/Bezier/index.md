---
    parent: Docs
    layout: math
    has_children: true
    title: Bezier
---
# Bezier functions
A collection of a few functions for bezier curves

## Explanation
Bezier curves are a type of curve defined by multiple "control points." The curve is made by moving a point through the control points. The curve is defined by a parameter `t` which is a number between 0 and 1. The curve is defined by repeated linear interpolation between the control points.

Linear interpolation is a function to find a point between two points. It is defined by a parameter `t` which is a number between 0 and 1. The point is defined by the equation:

$ P(t) = (1-t)P_0 + tP_1 $

where $P_0$ and $P_1$ are the two points and $t$ is the parameter.

What bezier curve do is what's called repeated linear interpolation. First, to find a single point on the curve, each consecutive control point is interpolated with the previous control point. Then, these new points are used to interpolate with the previous points. This is repeated until there is only one point left. This point is the point on the curve. Repeating this for different values of `t` will give you a curve.

There are also functions for taking the derivative and curvature of bezier curves at specific points which lib46f has implemented. 

