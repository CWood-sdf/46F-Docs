---
    parent: Inertial
    layout: docs
    grand_parent: Docs
    title: heading()
---
# double heading()
Returns the heading of the robot in degrees. 

## Returns
The heading of the robot in degrees.

## Example
```cpp
// Create an inertial sensor object
Inertial sensor = Inertial(PORT16, 358.0, 358.0);
// Print the heading of the robot every second
while(true){
    printf("Heading: %f\n", sensor.heading());
    vex::task::sleep(1000);
}
```