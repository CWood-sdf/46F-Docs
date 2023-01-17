---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: addPto(pneumatics&amp;, vector&lt;int&gt;, bool)
---
# Pto addPto(pneumatics& p, vector<motor*> motors, bool state)
Adds a pto to the MotorGroup with the given pneumatics, motors, and state.

{: .note }
It is recommended to use the [addPto(pneumatics&, vector<motor*>, bool)](addPto_pneumatics_vec_motor_bool.md) overload instead of this one because it will be easier to read the code.

## Parameters
- `p` - The pneumatics to use for the pto.
- `motors` - A vector of motor indices to use for the pto.
- `state` - The state of the pneumatic in the pto drive state. 

## Returns
A pto object to use for controlling the pto.

## Example
```cpp
brain Brain; 
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);
pneumatics ptoPneumatics = pneumatics(Brain.ThreeWirePort.A);
Pto p = mg.addPto(ptoPneumatics, {0, 1}, true);
/*
 * Makes a pto with the pneumatics on port A, 
 *      motors 0 and 1 (AKA m1 and m2), 
 *      and the pneumatic in the "open" state on pto drive. 
*/
```