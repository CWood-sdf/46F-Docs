---
    parent: Encoder
    layout: docs
    grand_parent: Docs
    title: resetPosition()
---
# void resetPosition()
Resets the position of the encoder to 0

## Example
```cpp
rotation rot = rotation(PORT1);
Encoder enc = Encoder(rot);

enc.resetPosition();
```