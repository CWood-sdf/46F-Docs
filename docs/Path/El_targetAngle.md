---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: El::targetAngle
---
# double El::targetANgle
A variable that holds the target robot angle of the given path point

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
cout << path.path[0].targetAngle << endl;
//should print 0
```