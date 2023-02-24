---
    parent: PIDF_Extension
    layout: docs
    grand_parent: Docs
    title: manageD(double&amp;)
---
# void manageD(double&amp; d)
This function is used to manage the D value of the PIDF. This function is called every time the PIDF is updated. This function is passed a reference to the d value, thus any changes made to the value will be reflected in the PIDF.

## Parameters
- `d` - The D value (not the kD value, but the actual D value)

## Example
```cpp
//EMA the D value
//This is the original reason for why this system even exists
struct MyExtension : public PIDF_Extension {
    EMA ema;
    MyExtension() {
        ema = EMA(0.5, 0);
    }
    MyExtension(double alpha) {
        ema = EMA(alpha, 0);
    }
    void manageD(double& d) {
        ema.update(d);
        d = ema;
    }
};
```