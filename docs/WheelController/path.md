---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: path
---
# Path path
This variable holds the Path object that makes all the paths for the wheel controller

## Example
```cpp
//This will print out the points in the path that is currently being followed
if(wc.drawArr){
    for (PVector point : wc.path.arr) {
        std::cout << point.x << ", " << point.y << std::endl;
    }
}
```