---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: El::bezierPt
---
# PVector El::bezierPt
A variable that holds the global position of that path point.

## Example 
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
cout << path.path[0].bezierPt << endl;
//prints: [0, 0, 0]
```