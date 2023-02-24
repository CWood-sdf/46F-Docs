---
    parent: LineCounter
    layout: default
    grand_parent: Docs
    title: LineCounter(triport::port&amp;, bool = false)
---
# LineCounter(triport::port&amp; port, bool throughPolycarb = false)
Constructs a line tracker from the given port, then constructs a LineCounter with the given line tracker sensor. If the line tracker is on the other side of polycarb, then set `throughPolycarb` to true. This is because the line tracker is less sensitive to reflectivity when it is on the other side of polycarb.

## Parameters
- `port` - The port to use
- `throughPolycarb` - Whether the line tracker is on the other side of polycarb

## Example
```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);
```