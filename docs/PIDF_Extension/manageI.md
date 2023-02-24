---
    parent: PIDF_Extension
    layout: docs
    grand_parent: Docs
    title: manageI(double&amp;)
---
# void manageI(double&amp; i)
This function is used to manage the I value of the PIDF. This function is called every time the PIDF is updated. This function is passed a reference to the i value, thus any changes made to the value will be reflected in the PIDF.

## Parameters
- `i` - The I value (not the kI value, but the actual I value)

## Example
```cpp
//Cap the I value at 100, but this behavior is already implemented in the PIDF class
struct MyExtension : public PIDF_Extension {
    void manageI(double& i) {
        if(i > 100) {
            i = 100;
        }
    }
};
```
