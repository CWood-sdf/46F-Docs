---
    parent: PathFollowSettings
    layout: docs
    grand_parent: Docs
    title: useDistToGoal
---
# bool useDistToGoal
This setting is true when the robot is using the distance to the goal, rather than the perpendicular distance to the point. 

## Default value
`true`

## Explanation
When this setting is true, the robot will use the distance to the goal as the distance remaining. This means that the robot will stop when it is within the `exitDist` of the goal. When this setting is false, the robot will use the perpendicular distance to the point (ie how far it has to move forward to be perpendicular to the target point). 
