---
    parent: PVector
    layout: docs-math
    grand_parent: Docs
    title: heading()
---
# double heading()
Gets the angle of rotation for this vector in the XY plane.

## Returns
A double representing the angle of rotation in the XY plane

## Explanation
So what does this mean? Well, if you think of a vector as a line, then the angle of rotation is the angle between the line and the Y axis. 

It just does some simple trig to get the angle using the arctangent function:

$ \theta = -\arctan(\frac{-x}{y}) $

The fact that it is the angle to the Y axis is extremely important because most other people's code uses the X axis as the 0 degree axis. This caused me a few problems when I was making my ramsete controller because it was X axis based and it took me a while to figure it out.

## Example
```cpp
PVector v = PVector(1, 1);
v.heading(); // Returns 45 degrees
```