---
    parent: Inertial
    layout: docs
    grand_parent: Docs
    title: lastHeading()
---
# double lastHeading()
Returns the last heading of the robot in degrees.

## Returns
The last heading of the robot in degrees.

## Example
```cpp
// Create an inertial sensor object
Inertial sensor = Inertial(PORT16, 358.0, 358.0);

// Print the last heading of the robot every second
while(true){
    printf("Last Heading: %f\n", sensor.lastHeading());
    vex::task::sleep(1000);
}
```