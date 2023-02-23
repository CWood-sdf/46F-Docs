---
    parent: WheelController
    layout: default
    grand_parent: Docs
    title: WheelController()
---
# WheelController(Chassis\* chassis, RamseteController\* defaultRamsete, PurePursuitController\* defaultPurePursuit, PidController\* defaultPid, std::function&lt;PVector(PVector)> reversePosition, std::function&lt;double(double)> reverseAngle, PID turnCtrl, double pathKConstant = 1)
The constructor for the WheelController class. It takes in a chassis, default controllers, auton reversing functions, a turn controller, and a k constant for the `path` object. 

## Parameters
- `chassis` - The chassis that the wheel controller will control
- `defaultRamsete` - The default ramsete controller for path following
- `defaultPurePursuit` - The default pure pursuit controller for path following
- `defaultPid` - The default pid controller for path following
- `reversePosition` - The function that reverses the position of path points for auton
- `reverseAngle` - The function that reverses the heading of the robot for the auton
- `turnCtrl` - The pid controller used for turning
- `pathKConstant` - The k constant for the `path` object

## Example
```cpp
PVector reversePosition(PVector pos) {
    //This function will reverse the position of the path points for spin up
    return PVector(-pos.x, -pos.y);
}
double reverseAngle(double angle) {
    //This function will reverse the heading of the robot for spin up
    return angle + 180;
    //The function for turning point would look like:
    //return -angle;
}
WheelController wc = WheelController(&chassis, &defaultRamsete, &defaultPurePursuit, &defaultPid, reversePosition, reverseAngle, turnCtrl);
```