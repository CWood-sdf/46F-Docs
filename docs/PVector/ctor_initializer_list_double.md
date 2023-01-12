---
    title: PVector(std::initializer_list&lt;double&gt;)
    parent: PVector
    layout: default
    grand_parent: Docs
---
# PVector(std::initializer_list&lt;double&gt; l)
This creates a new vector from an initializer list (a list of values in curly braces). This throws an error if the list has more than 3 elements.

## Parameters
- `l` - The initializer list to use

## Examples
```cpp
//A 3 element initializer list
PVector v = PVector({1.0, 2.0, 3.0});
/*
v.x == 1.0
v.y == 2.0
v.z == 3.0
*/
```   
```cpp
//A 2 element initializer list
PVector v = PVector({1.0, 2.0});
/*
v.x == 1.0
v.y == 2.0
v.z == 0.0
*/
```

## See Also
- [PVector(double, double, double)](ctor_double_double_double)
- [PVector(double, double)](ctor_double_double)