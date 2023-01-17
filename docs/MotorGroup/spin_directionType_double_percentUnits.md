---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: spin(directionType, double, percentUnits)
---
# void spin(directionType dir, double velocity, percentUnits units = pct)
Spins all motors in the group in the specified direction at the specified velocity.

## Parameters
- `dir` - the direction to spin the motors
- `velocity` - the velocity to spin the motors at
- `units` - the units of the velocity, defaulted to percent

## Example
```cpp
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);

//... later in some function
mg.spin(fwd, 50);
```
