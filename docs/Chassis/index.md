---
    parent: Docs
    layout: default
    has_children: true
    title: Chassis
---
# Chassis
A class that holds all the data about the chassis. 

## Inner Workings
This class is a wrapper for 2 function groups: converters, and motor drivers. 

The converters, well, convert between common units.

The drivers spin the motors at desired speeds. 

## Usage
For the most part, the user should use the WheelController class for most commangs. However, all the functions can be used externally. For the most part, the user would just be using the setSpeedLimit function in autons. Though, it can be helpful to use the drive functions in the auton for very small movements. 