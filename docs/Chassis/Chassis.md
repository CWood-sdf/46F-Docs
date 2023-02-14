---
    parent: Chassis
    layout: default
    grand_parent: Docs
    title: Chassis(MotorGroup&amp;, MotorGroup&amp;, Positioner&amp;, double, double, double, gearSetting)
---
# Chassis(MotorGroup&amp; left, MotorGroup&amp; right, Positioner&amp; positioner, double trackWidth, double gearRatio, double wheelDiameter, gearSetting cartridge)
Constructs a chassis with the given parameters

## Parameters
- `left` - The left side motor group
- `right` - The right side motor group
- `positioner` - The odometry tracker to use
- `trackWidth` - The distance between the center of the left wheel and the center of the right wheel
- `gearRatio` - The ratio of the motor to the wheel (input/output)
- `wheelDiameter` - The diameter of the wheel
- `cartridge` - The gearset of the motors

## Example
```cpp
motor LeftMot = motor(PORT1);
MotorGroup left = MotorGroup(LeftMot);
motor RightMot = motor(PORT2);
MotorGroup right = MotorGroup(RightMot);

Inertial imu = Inertial(PORT3, 355, 355);
vector<TrackingWheel> xWheels = {};
vector<TrackingWheel> yWheels = {TrackingWheel(PORT4, true, 2.75)};
Positioner positioner = Positioner(xWheels, yWheels, imu, {0, 0});

Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);
```