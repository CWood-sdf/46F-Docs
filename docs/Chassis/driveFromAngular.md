---
    parent: Chassis
    layout: docs-math
    grand_parent: Docs
    title: driveFromAngular(double, double)
---
# void driveFromAngular(double speedPct, double angularVelocity)
Drives the chassis on the given angular velocity at the given speed

{: .note}
Some angular velocities are impossible on some robots. This function will do its best to drive at the specified angular velocity, even if that means driving forward at 1% speed.

## Parameters
- `speedPct` - The speed to drive at in pct units
- `angularVelocity` - The angular velocity of the path to drive in rad/s units

## Explanation
There is this very nice equation that relates angular velocity, linear velocity, and curvature: 

$ \omega = \frac{v}{C} $

Where $\omega$ is the angular velocity, $v$ is the linear velocity, and $C$ is the curvature of the circle that the robot is driving on.

Thus we can convert angular velocity to curvature, then call [driveFromCurvature](driveFromCurvature) to drive on the circle.

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

//Drive at 1 rad/s at 50% speed
chassis.driveFromAngular(50, 1);
```