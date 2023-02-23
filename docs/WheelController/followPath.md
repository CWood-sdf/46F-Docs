---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: followPath(SpeedController*, VectorArr)
---
# void followPath(SpeedController\* speedController, VectorArr path)
Drives forward along a bezier curve path generated from the control points using the given speed controller. This function is blocking, and will not return until the robot has finished following the path.

## Parameters
- `speedController` - The speed controller to use
- `path` - The control points of the path, except for the starting point (which is assumed to be the robot's current position)

## Explanation
To start, it reverses all the control points if the robot is blue. This is because the robot's starting position is reversed if it is blue, so the path must be reversed as well.

Then, if the controller wants it to turn to face the path, it does so by generating the bezier curve, then finding the first point on the curve that is the controller's lookahead distance away from the robot. It then turns to face that point.

Then it invokes the `Path::make` function to generate the whole path with all the control points. 

Then it starts the main loop, this loop exits when the robot has been within the controller's target distance of the end of the path for the controller's target time.

It then finds the nearest path point, this will be used later for speed limiting. 

It then checks for exit conditions from either being stopped, or `forceEarlyExit()`

After that, it invokes the distance functions for the current distance from the end of the path. 

It then gets the virtual pursuit (which is just the pursuit point, unless the robot is within the virtual pursuit distance of the end of the path, at which point it artificially extends the lookahead point to keep it the virtual pursuit distance away from the robot).

It then gets the distance either depending on whether the controller wants distance to goal point or perpendicular distance to the path.

It then constructs a `SpeedController::Input` object with all the data that it has, and sends it over to the SpeedController to get the output. It then converts the outputs to the usable units (`SpeedController::ForwardVel::pct` and `SpeedController::AngularVel::pctDiff`), limits the speeds to the path speeds, then drives the robot with those speeds.

Once the loop has exited, it stops the robot according to the controller's stop mode.

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
wc.followPath(&purePursuit, { {0, 24}, {24, 24} });
```