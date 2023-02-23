---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: isMoving()
---
# bool isMoving()
Returns true if the robot is following a path or turning, not necessarily if it is actually moving. 

## Example
```cpp
thread waitForMove([]() {
    while (!wc.isMoving()) {
        wait(20, msec);
    }
    std::cout << "Robot is moving" << std::endl;
});
wc.driveTo(12, 12);
```
