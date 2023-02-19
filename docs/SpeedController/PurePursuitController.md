---
    parent: SpeedController
    layout: default
    grand_parent: Docs
    title: PurePursuitController
---
# class PurePursuitController
Directs the robot to a target using the pure pursuit algorithm for turn control and a PID for forward velocity control. 

## PurePursuitController::PurePursuitController(PIDF pid, PathFollowSettings settings)
Makes a new PurePursuitController object with the pid and settings specified.

## Explanation
The pure pursuit algorithm, at its core, just drives the robot at the curvature required to reach a path point. The path point is determined via a look-ahead distance defined by [PathFollowSettings::setFollowPathDist](../PathFollowSettings/setFollowPathDist). A good explanation of the algorithm can be found on starting on page 12 of the [pure pursuit paper](https://www.chiefdelphi.com/t/paper-implementation-of-the-adaptive-pure-pursuit-controller/166552). 

## Example
```cpp
PathFollowSettings purePursuitSettings = PathFollowSettings();
PurePursuitController purePursuit = PurePursuitController(
    PIDF(6.25, 0.1, 2.4325, 200, 6, 1),
    purePursuitSettings
        .setBrakeMode(WheelController::exitMode::normal) // use normal just bc
        .setExitDist(2) // exit when 2 inches away from target, could probably make it less
        .setUseDistToGoal(true) // use distance to goal to determine exit
        .setFollowPathDist(16) // use a 16 inch lookahead, this makes it so that it doesn't slam tight turns
        .setVirtualPursuitDist(11)); // use a 11 inch virtual lookahead, this makes it so that curvature doesn't spike at the end of a path
```