---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: setPtoDrive(Pto)
---
# MotorGroup& setPtoDrive(Pto ptoToUse)
Activates the given pto's pneumatics to the state to drive the system. 
    
{: .note }
This function will not work if the pto is not in the MotorGroup, and will print "MotorGroup::setPtoDrive: PTO index out of range" to the terminal.

## Parameters
- `ptoToUse` - The pto to use to change the state of.

## Returns
A reference to the MotorGroup object.

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

//... later in some function
mg.setPtoDrive(p);
/*
 * Activates the pto's pneumatics to the state to drive the system. 
 */
```