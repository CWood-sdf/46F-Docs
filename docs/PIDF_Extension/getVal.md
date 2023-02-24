---
    parent: PIDF_Extension
    layout: docs
    grand_parent: Docs
    title: getVal(double)
---
# double getVal(double value)
This function is used as a final management for the value of the PIDF. This function is called every time the PIDF is updated. 

## Parameters
- `value` - The speed value

## Return
The new speed value

## Example
```cpp
//Cap the speed value at 100
struct MyExtension : public PIDF_Extension {
    double getVal(double value) {
        if(value > 100) {
            value = 100;
        }
        return value;
    }
};
```