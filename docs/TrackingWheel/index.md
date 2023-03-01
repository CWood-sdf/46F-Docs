---
    parent: Docs
    layout: default
    has_children: true
    title: TrackingWheel
---
# TrackingWheel
A wrapper for all the data for one individual tracking wheel. These tracking wheels are sent over to the `Positioner` class after being made. The `Positioner` class then uses the data from these tracking wheels to calculate the position of the robot.

## Inner Workings
There isn't much going on here as it is just a simple wrapper for data. However, since it uses the [Encoder](../Encoder/) wrapper, any type of encoder can be put in, even a motor. This allows the user to not have tracking wheels on their robot, but still use all the functionality of lib46f. 

## Usage
All the user has to do is make an array of these and pass them into the positioner constructor. After that, the odometry system takes care of it all. 