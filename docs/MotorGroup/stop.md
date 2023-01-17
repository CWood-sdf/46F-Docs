---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: stop()
---
# void stop()
Stops all motors in the group with their default brake type.

## Example
```cpp
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);

//... later in some function
mg.stop();
```