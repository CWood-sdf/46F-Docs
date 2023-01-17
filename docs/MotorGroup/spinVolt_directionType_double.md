---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: spinVolt(directionType, double)
---
# void spinVolt(directionType dir, double velocityPct)
Spins all motors in the group in the specified direction at the specified percent velocity, but in volts. 

{: .note}
This function accepts a percent velocity, but it is converted to voltage before being sent to the motors. This is useful for controlling the speed of the motors for PID loops. 

## Parameters
- `dir` - the direction to spin the motors
- `velocityPct` - the percent velocity to spin the motors at

## Example
```cpp
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);

//... later in some function
mg.spinVolt(fwd, 50);
//This will spin the motors at 50% of their maximum voltage (AKA 6 volts)
```