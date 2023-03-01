---
    parent: DriveController
    layout: default
    grand_parent: Docs
    title: DriveController(Chassis*, int)
---
# DriveController(Chassis\* chassis, int threshold)
Constructs a DriveController on the chassis with the given threshold. 

## Parameters
- `chassis` - The chassis to drive the motors on
- `threshold` - The joystick threshold

## Example
```cpp
DriveController dc = DriveController(&chassis, 20);
```