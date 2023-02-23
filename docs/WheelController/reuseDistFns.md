---
    parent: WheelController
    layout: docs
    grand_parent: Docs
    title: reuseDistFns()
---
# void reuseDistFns()
This function will reuse the distance functions from the last drive command. This is useful if you want to use the same distance functions for multiple drive commands in a row. For example, if you want to use the same distance functions for `driveTo` and `backInto`, you can use this function to do so.

## Example
```cpp
//Print "almost there!" when 3 inches away from the target
wc.addDistFn(3, []() {
  printf("almost there!");
});
wc.driveTo(12, 12);
//This will reuse the distance functions from the last drive command
wc.reuseDistFns();
wc.backInto(12, 12);
```