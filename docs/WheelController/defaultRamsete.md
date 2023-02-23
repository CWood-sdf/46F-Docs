---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: defaultRamsete
---
# RamseteController\* defaultRamsete
This variable holds the default ramsete controller for path following set in the constructor. 

## Example
```cpp
//This will set the default ramsete controller to use a lookahead of 12 inches
wc.defaultRamsete->settings.setFollowPathDist(12);
```