---
    title: dist2D(PVector)
    parent: PVector
    layout: default
    grand_parent: Docs
---

# double dist2D(PVector v)

Gets the Euclidian (AKA geometry class) distance between the current vector and the parameter vector.

## Parameters

- `v` - The vector to calculate the distance to

## Returns

The Euclidian distance between the two vectors

## Explanation

The Euclidian distance formula from geometry is pretty simple:

$ sqrt((x_2 - x_1)^2 + (y_2 - y_1)^2) $

## Example

```cpp
PVector v = PVector(1, 2);
PVector o = PVector(3, 4);
v.dist2D(o); // Returns sqrt(8)
```

## See Also
