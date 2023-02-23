---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: publicPath
---
# VectorArr publicPath
This variable holds a copy of all the points in the path that is currently being followed. It is public so that you can access it in your own code. 

## Example
```cpp
//This will print out the points in the path that is currently being followed
if(wc.drawArr){
    for (PVector point : wc.publicPath.arr) {
        std::cout << point.x << ", " << point.y << std::endl;
    }
}
```