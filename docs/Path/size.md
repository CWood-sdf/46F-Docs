---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: size()
---
# int size()
Returns the number of points in the path

## Returns
The number of points in the path (it's usually 50 or 51)

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
cout << path.size() << endl;
```