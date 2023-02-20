---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: init()
---
# void init()
Initializes the inertial sensor then sets the position of the robot to the origin.

## Example
```cpp
positioner.init();
cout << positioner.position() << endl;
cout << positioner.heading() << endl;
//prints:
//Calibrating Sensor.................................
//[0, 0, 0]
//0
```