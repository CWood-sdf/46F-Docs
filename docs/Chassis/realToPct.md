---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: realToPct(double)
---
# double realToPct(double speedReal)
Converts inches per second to percent speed

## Parameter
- `speedReal` - The speed in inches per second to convert to percent speed

## Returns
The speed in percent

## Explanation
This function implements the inverse of the [pctToReal](pctToReal) function.

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);

double percentSpeed = chassis.realToPct(22.6893);
cout << percentSpeed << " %" << endl;
//prints: 100 %
```