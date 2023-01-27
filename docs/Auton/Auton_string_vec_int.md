---
    parent: Auton
    layout: default
    grand_parent: Docs
    title: Auton(string, std::vector&lt;int&gt;)
---
# Auton(string name, std::vector&lt;int&gt; arr)
Constructs an auton with the given name and potentiometer values. 

{: .note}
It is recommended to use the [operator+()](op_pl_charptr_vec_int.md) function instead of this constructor because it requires less characters and looks nicer.

## Parameters
- `name` - The name of the auton
- `arr` - The values that the potentiometer will return when the auton is selected

## Example
```cpp
Auton skillsAuton = Auton("Skills", vector<int>({1, 2, 3}));
```