---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: addDistFn(double, std::function&lt;void()&gt;)
---
# void addDistFn(double dist, std::function&lt;void()&gt; fn)
This function adds a function to be called when the robot is a certain distance away from the target. 

{: .note}
Since this function uses the distance to the target when following a path, some curved paths might cause the function to be called at a different distance than expected.

## Parameters
- `dist` - The maximum distance away from the target to call the function
- `fn` - The function to call

## Example
```cpp
//This will print "Hello World" when the robot is 5 inches away from the target
wc.addDistFn(5, []() {
  std::cout << "Hello World" << std::endl;
});
```