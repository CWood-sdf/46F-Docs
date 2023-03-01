---
    parent: EMA
    layout: docs
    grand_parent: Docs
    title: update(double)
---
# void update(double value)
Updates the ema filter with the given sensor value

## Parameter
- `value` - The value to update the EMA filter with

## Example
```cpp
EMA e = EMA(0.1);
e.seed(0);
e.update(10);
cout << "EMA Value is " << e.value() << endl;
//prints 1
```