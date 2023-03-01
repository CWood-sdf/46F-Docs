---
    parent: EMA
    layout: docs
    grand_parent: Docs
    title: seed(double)
---
# void seed(double value)
Seeds the ema with a specified value

## Parameter 
- `value` - The value to seed the EMA with

## Example
```cpp
EMA e = EMA(0.1);
e.seed(10);
cout << "EMA Value is " << e.value() << endl;
//prints 10
```