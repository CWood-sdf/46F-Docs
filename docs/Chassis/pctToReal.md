---
    parent: Chassis
    layout: docs-math
    grand_parent: Docs
    title: pctToReal(double)
---
# double pctToReal(double speedPct)
Converts percent speed to inches per second

## Parameter
- `speedPct` - The speed in percent to convert to inches per second

## Returns
The speed in inches per second

## Explanation
This function uses the equation: 

$ p_(ct) / 100 \* m_(axRp m) / g_(earRatio) \* (2 Pi) / 60 \* r_(adius) $

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

double inchesPerSecond = chassis.pctToReal(100);
cout << inchesPerSecond << " in/s" << endl;
//prints: 22.6893 in/s
```