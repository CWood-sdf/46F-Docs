---
    parent: Chassis
    layout: docs
    grand_parent: Docs
    title: inchesToRev(double)
---
# double inchesToRev(double inches)
Converts inches to revolutions

## Parameter
- `inches` - The number of inches to convert to rotations

## Returns
The number of revolutions needed to get to that number of inches

## Explanation
This function is the inverse function to [revToInches](revToInches). 

## Example
```cpp
Chassis chassis (left, right, positioner, 11, 3.0/2.0, 3.25/2.0, ratio18_1);
cout << "13.61 inches is " << chassis.inchesToRev(2) << " revolutions" << endl;
//prints: 13.61 inches is 2 revolutions
```
