---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: last()
---
# El&amp; last()
Returns a reference to the last element in the path

## Returns
A reference to the last element in the path

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
cout << path.last().bezierPt() << endl;
// prints: [45, 45, 0]
```