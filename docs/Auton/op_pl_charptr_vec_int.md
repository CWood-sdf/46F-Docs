---
    parent: Auton
    layout: default
    grand_parent: Docs
    title: operator+(const char*, std::vector&lt;int&gt;)
---
# Auton operator+(const char* name, std::vector&lt;int&gt; arr)
Generates an auton from the name and SelectorArr values;

## Parameters
- `name` - The name of the auton.
- `arr` - The SelectorArr values to attach to the auton.

## Returns
A new auton

## Example
```cpp
Auton skillsAuton = "Skills" + vector<int>({3, 4});
```