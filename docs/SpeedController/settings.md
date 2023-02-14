---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: settings
---
# PathFollowSettings settings
A variable that holds all the path following settings for the speed controller

## Example
```cpp
PathFollowSettings ramseteSettings = PathFollowSettings();
RamseteController ramsete = RamseteController(
    0.0, 0.0,
    ramseteSettings
        .setBrakeMode(WheelController::exitMode::normal)
        .setExitDist(2)
        .setUseDistToGoal(true)
        .setFollowPathDist(12)
        .setVirtualPursuitDist(2));
``` 