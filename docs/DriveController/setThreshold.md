---
    parent: DriveController
    layout: docs
    grand_parent: Docs
    title: setThreshold(int)
---
# DriveController&amp; setThreshold(int threshold)
Sets the joystick threshold for the controller

## Parameter
- `threshold` - The threshold for the controller

## Example
```cpp
DriveController dc = DriveController(&chassis);
dc.setThreshold(20);
```