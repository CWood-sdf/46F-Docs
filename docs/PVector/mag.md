---
    parent: PVector
    layout: default
    grand_parent: Docs
    title: mag()
---

# double mag()

This function returns the magnitude of the vector in the 2D XY plane.

## Explanation

This function solves the pythagorean theorem for the c term (the distance)
INSERT MATH HERE

## Returns

A double that holds the 2d length of the vector.

## Examples

```cpp
PVector v = PVector(1, 1);
v.mag(); // Returns sqrt(2)

PVector v2 = PVector(1, 1, 1);
v2.mag(); // Still returns sqrt(2)

PVector v3 = PVector(3, 4);
v3.mag(); // Returns 5
```

## See Also
