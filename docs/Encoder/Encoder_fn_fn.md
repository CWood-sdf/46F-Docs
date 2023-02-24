---
    parent: Encoder
    layout: default
    grand_parent: Docs
    title: Encoder(std::function&lt;double(rotationUnits)&gt;, std::function&lt;void()&gt;)
---
# Encoder(std::function&lt;double(rotationUnits)&gt; getPosition, std::function&lt;void()&gt; resetPosition)
Makes an encoder with the given functions. I don't know when this would be useful, but it's here.

## Parameters
- `getPosition` - The function to get the position of the encoder
- `resetPosition` - The function to reset the position of the encoder

## Example
```cpp
rotation rot = rotation(PORT1);
Encoder enc = ([&rot](){return rot.rotation(rotationUnits::deg);}, [&rot](){rot.resetRotation();});
```