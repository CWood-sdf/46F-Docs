---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: operator[](int)
---
# motor& operator\[](int index)
Gets the motor at the specified index.

## Parameters
- `index` - the index of the motor to get

## Returns
The motor at the specified index.

## Example
```cpp
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);
motor& m = mg[0];
//m is now a reference to m1
```