---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: RamseteController
---
# class RamseteController
Directs the robot to a target using the Ramsete algorithm. 

I have not yet tuned the ramsete constants, so it will not work right now. Honestly, I don't know enough about ramsete to tune it well, so if you want to help, please do.
## RamseteController::RamseteController(double beta, double zeta, PathFollowSettings settings)
Makes a new RamseteController object with the beta, zeta, and settings specified.

## Example
```cpp
RamseteController ramsete = RamseteController(
    0.0, 0.0,
    ramseteSettings
        .setBrakeMode(WheelController::exitMode::normal)
        .setExitDist(2)
        .setUseDistToGoal(true)
        .setFollowPathDist(12)
        .setVirtualPursuitDist(2));
```