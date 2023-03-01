---
    parent: DriveController
    layout: docs
    grand_parent: Docs
    title: setSpeedCurve(std::function&lt;double(double)>)
---
# DriveController&amp; setSpeedCurve(std::function&lt;double(double)> speedCurve)
Sets the speed curve to the given function. 

## Parameters
- `speedCurve` - The speed curve for the function

## Example
```cpp
//use a quadratic speed curve
DriveController dc = DriveController(&chassis);
dc.setSpeedCurve([](double pct) {
    pct /= 10.0;
    pct *= pct * sign(pct);
    return pct;
});
```