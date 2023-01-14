---
    parent: PVector
    layout: docs-math
    grand_parent: Docs
    title: angleTo(PVector)
---
# double angleTo(PVector v)
Gets the angle from the current vector to the specified vector.

## Parameters
- `v` - the vector to calculate the angle to

## Returns
The angle between the vectors, in degrees

## Explanation
This function treats the current vector as the origin and the parameter vector as the destination. It then calculates the heading of the destination vector relative to the new 'origin'. This function is extremely useful for path following. Say a robot is at position (3, 4) and needs to be able to face a point (10, 11). Just calling this function gives you the heading the robot needs to be at to face the point.

## Example
```cpp
PVector v = PVector(3, 4);
PVector o = PVector(10, 11);
v.angleTo(o); // Returns 45
```