---
    title: dist2D(PVector)
    parent: PVector
    layout: docs-math
    grand_parent: Docs
---

# double dist2D(PVector v)

Gets the 2D Euclidian (AKA geometry class) distance between the current vector and the parameter vector.

## Parameters

- `v` - The vector to calculate the distance to

## Returns

The Euclidian distance between the two vectors

## Explanation

The Euclidian distance formula from geometry is pretty simple:

$ sqrt((x_2 - x_1)^2 + (y_2 - y_1)^2) $

This function just substitutes the values of the current vector and the parameter vector into the formula.

## Example

```cpp
PVector v = PVector(1, 2);
PVector o = PVector(3, 4);
v.dist2D(o); // Returns sqrt(8)
```

## See Also
