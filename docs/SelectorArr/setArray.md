---
    parent: SelectorArr
    layout: docs
    grand_parent: Docs
    title: setArray(vector&lt;int&gt;)
---
# void setArray(vector&lt;int&gt; dialValues)
Sets the dial values for the selector.

## Parameters
- `dialValues` - The values of the dials in the order they were created.

## Example
```cpp
PotDial dial1 = PotDial(Brain.ThreeWirePort.A, 3, 100, true);

SelectorArr selector = SelectorArr();

selector.setArray({1});