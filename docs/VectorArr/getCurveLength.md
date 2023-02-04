---
    parent: VectorArr
    layout: docs
    grand_parent: Docs
    title: getCurveLength()
---
# double getCurveLength()
Returns the length of the curve formed by the PVector array

## Returns
The length of the curve

## Example
```cpp
VectorArr arr({PVector(0, 0, 0), PVector(0, 5, 0), PVector(5, 5, 0), PVector(5, 0, 0)});
std::cout << arr.getCurveLength() << std::endl;
//Prints: 15
```