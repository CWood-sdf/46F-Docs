---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: setK(double)
---
# void setK(double k)
Sets the k constant for the path

## Explanation
When I talked about the path speed generation at the [home page](index) for this seciont, I mentioned a constant. This function sets this constant. When generating the path speeds, the speed is set to the k constant divided by the curvature at that point. Thus, increasing the k constant makes the robot take turns faster. My recommendation is to default it to between 1 and 1.5

## Example
```cpp
Path path = Path();
path.setK(1.3);
```