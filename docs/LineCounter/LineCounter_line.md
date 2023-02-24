---
    parent: LineCounter
    layout: default
    grand_parent: Docs
    title: LineCounter(line&amp;, bool = false)
---
# LineCounter(line&amp; sensor, bool throughPolycarb = false)
Constructs a LineCounter with the given line tracker sensor. If the line tracker is on the other side of polycarb, then set `throughPolycarb` to true. This is because the line tracker is less sensitive to reflectivity when it is on the other side of polycarb.

## Parameters
- `sensor` - The line tracker sensor to use
- `throughPolycarb` - Whether the line tracker is on the other side of polycarb

## Example
```cpp
line tracker = line(Brain.ThreeWirePort.A);

LineCounter counter(tracker);
```