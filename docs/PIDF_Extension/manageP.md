---
    parent: PIDF_Extension
    layout: docs
    grand_parent: Docs
    title: manageP(double&amp;)
---
# void manageP(double&amp; p)
This function is used to manage the P value of the PIDF. This function is called every time the PIDF is updated. This function is passed a reference to the p value, thus any changes made to the value will be reflected in the PIDF.

## Parameters
- `p` - The P value (not the kP value, but the actual P value)

## Example
```cpp
//Cancel out the P value, though this can be done with the kP value
struct MyExtension : public PIDF_Extension {
    void manageP(double& p) {
        p = 0;
    }
};
```
