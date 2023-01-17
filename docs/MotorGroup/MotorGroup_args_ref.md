---
    parent: MotorGroup
    layout: default
    grand_parent: Docs
    title: MotorGroup(Args&...)
---
# MotorGroup(Args&...)
Generates a MotorGroup from a list of motor references. The motors are added in the order they are passed in.

## Parameters
- `Args&...` - A list of motor references.

## Example
```cpp
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);
```
