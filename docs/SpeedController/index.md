---
    parent: Docs
    layout: default
    has_children: true
    title: SpeedController
---
# SpeedController

The SpeedController class generates all the speeds required to follow a path. However, it does absolutely no path following itself. What happens is that [WheelController::followPath](../WheelController/followPath) gives the SpeedController data about where the robot is on the path, and SpeedController generates speeds from it. A user can set up a SpeedController of their own, they simply have to inherit from the SpeedController class, implement the [SpeedController::followTo](followTo) function, and maybe other functions, and pass it into the `followPath` function. This allows the user to have extreme customizability of the path following with very little extra code added. 

## Predefined SpeedControllers
Lib46f comes with a bunch of predefined SpeedControllers that can be used. These speed controllers have been tested (except Ramsete) and work well. They are:
- PurePursuitController - This controller uses the Pure Pursuit algorithm to turn the robot and a PID to move the robot forward. 
- PidController - This controller uses a PID to move the robot forward and a PID to keep the robot straight.
- RamseteController - This controller uses the Ramsete algorithm to turn and drive the robot. However, I have never had enough time to actually tune it, so anyone that wants to use this controller will have to tune it themselves, then submit a pull request to add the constants to the library.

## Inner Workings
This class is just an interface, so it doesn't actually do anything. It is just a way for the user to create their own speed controllers. 