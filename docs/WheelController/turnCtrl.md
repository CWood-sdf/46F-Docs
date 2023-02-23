---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: turnCtrl
---
# PIDF turnCtrl
This is the PIDF controller used for turning. It is used by `turnTo` and `faceTarget` functions. 

## Examples
```cpp
//increase the turnCtrl's kP by 0.5
PidAdder pa = PidAdder(0.5, 0, 0);
wc.turnCtrl += pa;
```