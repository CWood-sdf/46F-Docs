---
    parent: Docs
    layout: default
    has_children: true
    title: PathFollowSettings
---
# PathFollowSettings
A class that holds all the various settings for `followPath` behavior.

## Structure
For each of the properties, there is a set method called `set<PropertyName>`. For example, to set the `useDistToGoal` property, you would call `setUseDistToGoal`. Each of these methods returns a reference to the `PathFollowSettings` object, so you can chain them together. For example:
```cpp
PathFollowSettings settings;
settings.setUseDistToGoal(true).setExitDist(2.0);
```

## Usage
To use this class, declare a PathFollowSettings, edit it, and then pass it in to a SpeedController. 