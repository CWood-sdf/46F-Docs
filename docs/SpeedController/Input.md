---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input
---
# struct Input
The information that `followPath` gives to the speed controller. This struct is the "contract" between WheelController and SpeedController. `followPath` will pass this struct to the `followTo` function. `followPath` guarantees that all the information in this struct will be valid. The speed controller can use this information to follow the path.

There is a slight potential for a problem: the [driveDistance](../WheelController/driveDistance) function DOES NOT fill out all the information in this struct, it only fills what is necessary. However, `driveDistance` only accepts a PidController, which has already been made to use only the information that `driveDistance` gives it. 

## Members
- [position](Input_position)
- [target](Input_target)
- [targetPt](Input_targetPt)
- [currentAngle](Input_currentAngle)
- [chassis](Input_chassis)
- [angleTarget](Input_angleTarget)