---
    parent: Docs
    layout: default
    has_children: true
    title: Positioner
---
# Positioner
The `Positioner` class is the main class for the position tracking system. It is used to calculate the position of the robot using the tracking wheels. It also has functions to set the position of the robot and to get the position of the robot.

## Inner Workings
This class combines data from [Tracking Wheels](../TrackingWheel/) and an [inertial sensor](../Inertial/) to calculate the position of the robot. It uses the [Positioner::update()](../Positioner/update) function to update the position of the robot. This function is called every 10 milliseconds, so the position of the robot is updated every 10 milliseconds. All the math for this is obtained from the [Odometry paper](http://thepilons.ca/wp-content/uploads/2018/10/Tracking.pdf). 

Basically, odometry boils down to estimating each individual robot movement as an arc, then calculating the change in positione of the robot from this arc. 