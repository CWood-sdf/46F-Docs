---
    parent: Positioner
    layout: docs
    grand_parent: Docs
    title: velocity()
---
# double velocity()
Returns an estimate of the speed of the robot in inches per second.

{: .note}
I don't think this is actually a good estimate of the speed of the robot. It's just the change between the last position and the current position divided by time. There is absolutely no smoothing or filtering of the data. It's just the raw data.

## Returns
A `double` containing an estimate of the speed of the robot in inches per second.

## Example
```cpp
cout << positioner.velocity() << endl;
// Prints something
```