---
    title: Docs
    layout: default
    has_children: true
---
# Documentation
Welcome to the lib46f docs! These docs are going to be organized in a fairly simple manner: Each class will get its own page, and all the methods and properties will have sub pages. Each page will have an example code. 

## Starters
The class that you would use the most is the WheelController class for controlling your robot during auton. This class is the core focus of the library and contains a huge amount of methods. 

## Conventions
- All speeds in lib46f are percent speed, unless otherwise explicitly stated. Under the hood, all the motors are driven with volts (unless you are directly calling MotorGroup spin function). 
- All angles are in degrees