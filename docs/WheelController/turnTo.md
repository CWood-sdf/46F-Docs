---
    parent: WheelController
    layout: docs-math
    grand_parent: Docs
    title: turnTo(double)
---
# void turnTo(double angle)
This function turns the robot to a specific angle. It will use the `turnCtrl` pid controller to do so.

{: .note}
The Chassis::speedLimit is used to limit the speed of the robot while turning. 

{: .note}
This function exits when the robot is within 4 degrees of the target for 200 milliseconds.

## Explanation
This function calculates the "normAngle" of the turn every iteration. The normAngle is how many degrees the robot needs to turn to reach the target angle. It then uses the `turnCtrl` pid controller to calculate the speed of the robot targeting a normAngle of 0. 

The normAngle is calculated by subtracting the target angle from the current angle. If the normAngle is greater than 180, it will subtract 360 from the normAngle. If the normAngle is less than -180, it will add 360 to the normAngle.

$ \text{normAngle} = \text{targetAngle} - \text{currentAngle} $

$ \text{normAngle} = \text{normAngle} - 360 \text{ if } \text{normAngle} > 180 $

$ \text{normAngle} = \text{normAngle} + 360 \text{ if } \text{normAngle} < -180 $

## Example
```cpp
//This will turn the robot to an angle of 90 degrees
wc.turnTo(90);
```