---
    parent: Docs
    layout: default
    has_children: true
    title: PIDF
---
# PIDF
This class represents a PIDF controller. 

## Inner Workings
A PIDF controller is a fairly simple controller. It uses a proportional, integral, derivative, and feedforward term to calculate the output of the controller. To first determine the output, the controller must find the error, which is the difference between the current sensor value and the target value. Then, the controller takes the difference between the current and the last error; this is the derivative term. The integral term is the sum of all the errors. The feedforward term is the target value. The output is then calculated using the following formula:

`output = kP * error + kI * integral + kD * derivative + kF * target`

where `kP`, `kI`, `kD`, and `kF` are the proportional, integral, derivative, and feedforward constants respectively. These constants must be determined experimentally, and vary based on the system. If you need help determining these constants, you can do a google search for "PID tuning".

This class also allows for 3 methods to prevent integral values from getting to large, these values can be set in most of the constructors:
- integral capping
- integral growth zone
- integral zero range

Integral capping limits the integral to a specific value. This is useful if you want to prevent the integral from getting too large. For example, if you are using this controller to control the speed of a motor, you may want to limit the integral to a certain value so that the motor does not get too fast. If the `iCap` parameter is negative, then the integral can grow without limit.

The formula for this is:
```cpp
if(integral > iCap && iCap >= 0) {
    integral = iCap;
} 
```

Integral growth zone limits the integral to only being calculated in a certain range. This is useful if you want to prevent the integral from growing when the error is big. For example, if you are using this controller to control the speed of a motor, you may want to limit the integral to only be calculated when the motor is close to the target speed. If the `iZone` parameter is negative, then the integral can grow in any range. 

The formula for this is:
```cpp
if(abs(error) < iZone || iZone < 0) {
    integral += error;
}
```

Integral zero range is a range of the error where the integral is set to 0. This is useful if you want a motor to slow down when it is in a certain error range. Once again, if the `iZeroRange` parameter is negative, then this functionality will not be used. 

The formula for this is:
```cpp
if(abs(error) < iZeroRange && iZeroRange >= 0) {
    integral = 0;
}
```