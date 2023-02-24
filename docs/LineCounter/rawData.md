---
    parent: LineCounter
    layout: docs
    grand_parent: Docs
    title: rawData()
---
# int rawData()
Returns the raw `reflectivity()` value of the sensor. The higher the value, the more reflective the surface is. This function is useful for debugging and tuning the sensor.

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

while(true){
    cout << "Raw reflectivity: " << l.rawData() << endl;
    task::sleep(10);
}
```