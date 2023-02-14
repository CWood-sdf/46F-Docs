---
    parent: Chassis
    layout: docs-math
    grand_parent: Docs
    title: driveFromCurvature(double, double)
---
# void driveFromCurvature(double speedPct, double curvature)
Drives the chassis on the given curvature at the given speed

{: .note}
Some curvature/speed combinations may be impossible on some robots (any time `speedPct` is 100%, for example). This function will ALWAYS drive at the specified curvature, even if that means driving forward at 1% speed.

## Parameters
- `speedPct` - The speed to drive at in pct units
- `curvature` - The curvature of the path to drive in 1/in units

## Explanation
Curvature's units is 1/length. For the purposes of curvature, length is the radius of a circle. So, a curvature of 1/10 means that the robot is driving on a circle with a radius of 10 inches.

This function uses the equations:

$ L = V \* (2 + CT) / 2 $

and 

$ R = V \* (2 - CT) / 2 $

Where $L$ is the left side speed, $R$ is the right side speed, $V$ is the speed, $C$ is the curvature, and $T$ is the track width.

These equations can all be found in the [pure pursuit paper](https://www.chiefdelphi.com/t/paper-implementation-of-the-adaptive-pure-pursuit-controller/166552) on page 16. 

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

//Drive along a 10 inch circle at 50% speed
chassis.driveFromCurvature(50, 0.1);
```