---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: update()
---
# void update()
Updates the position of the robot. This function must be put inside an infinite loop in its own thread. 

## Example
```cpp
thread positionerThread = thread([](){
    while(true){
        positioner.update();
    }
});
```