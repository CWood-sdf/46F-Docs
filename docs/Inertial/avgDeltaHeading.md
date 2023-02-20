---
    parent: Inertial
    layout: docs
    grand_parent: Docs
    title: avgDeltaHeading()
---
# double avgDeltaHeading()
Returns the average between the last and current heading of the robot in degrees.

## Returns
The average between the last and current heading of the robot in degrees.

## Example
```cpp
// Create an inertial sensor object
Inertial sensor = Inertial(PORT16, 358.0, 358.0);

// Print the average delta heading of the robot every second
while(true){
    printf("Average Delta Heading: %f\n", sensor.avgDeltaHeading());
    vex::task::sleep(1000);
}
```