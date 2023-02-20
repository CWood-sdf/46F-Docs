---
    parent: PathFollowSettings
    layout: docs
    grand_parent: Docs
    title: exitMode
---
# enum class exitMode
An enum that holds the various braking modes for `followPath` behavior.

## Values
- `exitMode::hold` - Apply `brakeType::hold` to all the motors
- `exitMode::coast` - Apply `brakeType::coast` to all the motors
- `exitMode::normal` - Equivalent to `exitMode::hold`
- `exitMode::nothing` - Lets the motors continue running at whatever speed. This might be useful if one is trying to combine to different controllers together.

## Examples
```cpp
// Set the exit mode to coast
pidController.settings.setBrakeMode(PathFollowSettings::exitMode::coast);
wc.driveTo(0, 0);
//Set exit mode to hold
pidController.settings.setBrakeMode(PathFollowSettings::exitMode::hold);
wc.driveTo(24, 24);

purePursuitController.settings.setExitDist(14);
    .setExitMode(PathFollowSettings::exitMode::nothing);
    .setUseDistToGoal(true);
pidController.setTurnAtStart(false);
//This will use pure pursuit until it is within 14 inches of the goal, then it will use the PID controller
wc.followPath({ {0, 24}, {0, 0} }, &purePursuitController);
wc.driveTo(0, 0);
```
