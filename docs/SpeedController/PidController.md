---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: PidController
---
# class PidController
Moves a robot to a target using PIDs for both turn and forward velocity control.

This class is best for use with straight line paths, because it generally overturns on forward paths. 

## PidController::PidController(PIDF pid, PIDF turnPid, PathFollowSettings settings)
Makes a new PidController object with the pid, turnPid, and settings specified.

## Example
```cpp
PathFollowSettings pidSettings = PathFollowSettings();
PidController pidController = PidController(
    PIDF(9.25, 0.1, 2.4325, 200, 6, 1),
    PID(0.9, 0, 0.3, 0, 0, 0),
    pidSettings
        .setBrakeMode(WheelController::exitMode::normal)
        .setExitDist(1) // exit when 1 inch away from target
        .setUseDistToGoal(false) // use perpendicular distance to goal to determine exit, because PID might miss target circle
        .setFollowPathDist(16) // use a 16 inch lookahead, this makes smooths out when it's drifting away
        .setTurnAtStart(true) // turn at the start of the path
        .setVirtualPursuitDist(9) // use a 9 inch lookahead so that it doesn't overturn at end of path
        .setMaxTimeIn(200)); // exit after 200 ms
```