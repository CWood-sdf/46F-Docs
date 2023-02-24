---
    parent: Chassis
    layout: docs-math
    grand_parent: Docs
    title: revToIn(double)
---
# double revToIn(double revolutions)
Converts revolutions to inches. 

## Parameter
- `revolutions` - THe revolutions on the motor

## Returns
The distance the robot travels in inches

## Explanation
This function uses the equation:

$ 2 \* Pi \* r_(evolutions) \* r_(adius) \* g_(ear Ratio) $

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);
cout << "2 revolutions is " << chassis.revToIn(2) << " inches" << endl;
//prints: 2 revolutions is 13.61 inches
```