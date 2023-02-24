---
    parent: PIDF_Extension
    layout: docs
    grand_parent: Docs
    title: manageError(double)
---
# double manageError(double error)
This function is used to manage the error value of the PIDF. This function is called every time the PIDF is updated. This function is not passed a reference to the error value, thus any changes made to the value will not be reflected in the PIDF.

## Parameters
- `error` - The error value

## Return
The new error value

## Example
```cpp
//EMA the error value
struct MyExtension : public PIDF_Extension {
    EMA ema;
    MyExtension() {
        ema = EMA(0.5, 0);
    }
    MyExtension(double alpha) {
        ema = EMA(alpha, 0);
    }
    double manageError(double error) {
        ema.update(error);
        return ema;
    }
};
```