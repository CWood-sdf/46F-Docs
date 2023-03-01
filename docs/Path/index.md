---
    parent: Docs
    layout: default
    has_children: true
    title: Path
---
# Path
A class that generates bezier curve paths with target speeds and angles for the robot to follow. 

## Usage
This class generates paths for the robot to follow. It also makes quasi-motion profiling speed limiting based on the curvature of the path and a constant. This speed limiting slows the robot down in areas of high curvature. It also gives the robot an accelleration and decelleration. The only function the user will ever have to use is the `setK` function to change how fast the robot goes through turns. 