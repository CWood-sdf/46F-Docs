---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: backwardsFollow(SpeedController*, VectorArr)
---
# void backwardsFollow(SpeedController* controller, VectorArr path)
Does the same thing as `followPath` but backwards. 

## Parameters
- `controller` - The speed controller to use
- `path` - The path to follow

## Example
```cpp
wc.estimateStartPos({0, 0}, 0);
wc.backwardsFollow(&purePursuit, { {0, 24}, {24, 24} });
```