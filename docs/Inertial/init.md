---
    parent: Inertial
    layout: docs
    grand_parent: Docs
    title: init()
---
# void init()
Calibrates the inertial sensor using [gyroInit](../gyroInit). This function is called automatically in the [Positioner::init()](../Positioner/init) function.

## Example
```cpp
// Create an inertial sensor object
Inertial sensor = Inertial(PORT16, 358.0, 358.0);

// Calibrate the inertial sensor
sensor.init();
```


