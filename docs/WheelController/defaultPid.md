---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: defaultPid
---
# PidController\* defaultPid
This variable holds the default PID controller for path following set in the constructor.

## Example
```cpp
// This will set the pid controller to use an exit distance of 0.5 inches
wc.defaultPid->settings.setExitDist(0.5);
```