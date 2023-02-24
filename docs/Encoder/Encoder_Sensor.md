---
    parent: Encoder
    layout: default
    grand_parent: Docs
    title: Encoder(Sensor&amp;)
---
# *template&lt;class Sensor&gt;* Encoder(Sensor&amp; sensor)
Creates a new Encoder object from the given sensor. 

## Parameters
- `sensor` - The sensor to use

## Example
```cpp
rotation rot = rotation(PORT1);
Encoder enc = Encoder(rot);

// or

motor mtr = motor(PORT1);
Encoder enc = Encoder(mtr);

// or

encoder e = encoder(Brain.ThreeWirePort.A);
Encoder enc = Encoder(e);
```
