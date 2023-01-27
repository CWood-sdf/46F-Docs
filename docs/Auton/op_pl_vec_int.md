---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: operator+(std::vector&lt;int&gt;)
---
# Auton&amp; operator+(std::vector&lt;int&gt; vec)
Attaches given SelectorArr values to the auton.

{: .warning}
This function does NOT make a copy of the auton, it modifies the auton in place. Some of you might think that this function should be on the operator+= function, but I decided to put it on the operator+ function because I think it is actually more intuitive to use when making autons.

{: .note}
It is preferred to use the other [operator+](op_pl_fn.md) function instead of this one, because it is easier to read and understand (because it puts the array before the function).

## Parameters
- `vec` - The SelectorArr values to attach to the auton.

## Returns
A reference to the auton.

## Example
```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
} + vector<int>({3, 4});
```
