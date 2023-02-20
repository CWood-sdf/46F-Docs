---
    parent: Inertial
    layout: docs
    grand_parent: Docs
    title: deltaHeading()
---
# double deltaHeading()
Returns the difference between the last and current heading of the robot in degrees.

## Returns
The difference between the last and current heading of the robot in degrees.

## Example
```cpp
// Create an inertial sensor object
Inertial sensor = Inertial(PORT16, 358.0, 358.0);

// Print the delta heading of the robot every second
while(true){
    printf("Delta Heading: %f\n", sensor.deltaHeading());
    vex::task::sleep(1000);
}
```