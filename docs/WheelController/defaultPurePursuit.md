---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: defaultPurePursuit
---
# PurePursuit\* defaultPurePursuit
This variable holds the default pure pursuit controller for path following set in the constructor. 

## Example
```cpp
//This will set the default ramsete controller to use a lookahead of 12 inches
wc.defaultPurePursuit->settings.setFollowPathDist(12);
```