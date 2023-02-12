---
    parent: Path
    layout: docs
    grand_parent: Docs
    title: operator[](int)
---
# El& operator\[](int index)
Returns a reference to the path element at the specified index

## Parameter
- `index` - The index to get the path element from

## Returns
A reference to the path element at the specified index

## Example
```cpp
Path path = Path();
path.setK(1.3);
VectorArr points = VectorArr({PVector(0, 0), PVector(0, 45), PVector(45, 45)});
path.make(points, &chassis);
cout << path[0].bezierPt << endl;
//prints [0, 0, 0]
```