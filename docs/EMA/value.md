---
    parent: EMA
    layout: docs
    grand_parent: Docs
    title: value()
---
# double value()
Returns the filter's estimate

## Example
```cpp
EMA e = EMA(0.1);
e.seed(0);
e.update(10);
cout << "EMA Value is " << e.value() << endl;
//prints 1
```