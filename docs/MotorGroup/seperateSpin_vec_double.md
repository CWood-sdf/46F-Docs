---
    parent: MotorGroup
    layout: docs
    grand_parent: Docs
    title: seperateSpin(vector&lt;double&gt;)
---
# void seperateSpin(vector&lt;double&gt; velocities)
Spins all motors in the group at the specified velocities in pct.

{: .note}
If the number of velocities specified does not match the number of motors in the group, the function will print "MotorGroup::seperateSpin: Speeds vector size does not match motor size" to the terminal and exit.

{: .note}
The intended use of this function is to control omni-directional drive trains, but you could use it for something else. 

## Parameters
- `velocities` - the velocities to spin the motors at in pct

## Example
```cpp
vex::motor m1 = vex::motor(vex::PORT1);
vex::motor m2 = vex::motor(vex::PORT2);
vex::motor m3 = vex::motor(vex::PORT3);
vex::motor m4 = vex::motor(vex::PORT4);

MotorGroup mg = MotorGroup(m1, m2, m3, m4);

//... later in some function
mg.seperateSpin({50, 100, 75, 25});
//Spins m1 at 50% of its maximum velocity
//Spins m2 at 100% of its maximum velocity
//Spins m3 at 75% of its maximum velocity
//Spins m4 at 25% of its maximum velocity
```
