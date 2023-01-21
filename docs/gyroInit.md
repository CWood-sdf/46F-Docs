---
    parent: Docs
    layout: default
    title: gyroInit(inertial&)
---

# void gyroInit(inertial& Gyro)

Calibrates an inertial sensor. It also outputs a nice moving "..." message to the terminal.

If the sensor is not connected, this function exits and prints "No Sensor" to the terminal.

## Parameters

- `Gyro` - The inertial sensor to calibrate.

## Example

```cpp
inertial Inertial(PORT1);

int main() {
    gyroInit(Inertial);
    //Rest of code
}
```
