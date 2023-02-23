---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: forceEarlyExit()
---
# void forceEarlyExit()
Forces the robot to stop whatever the current movement command is. 

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
//This thread will force the robot to stop if it is more than 6 inches away from the origin, 
//meaning it will never get to its target of (12, 12)
thread exitEarly([]() {
    while(1){
        if(wc.botPos().dist2D({0, 0}) > 6){
            wc.forceEarlyExit();
        }
        wait(20, msec);
    }
});
wc.driveTo(12, 12);
```