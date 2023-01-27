---
    parent: Auton
    layout: default
    grand_parent: Docs
    title: Auton(string, std::function&lt;void()&gt;)
---
# Auton(string name, std::function&lt;void()&gt; fn)
Constructs an auton with the given name and function. 

{: .note}
It is recommended to use the [operator+()](op_pl_charptr_fn.md) function instead of this constructor because it requires less characters and looks nicer.

## Parameters
- `name` - The name of the auton
- `fn` - The function that will be called when the auton is run

## Example
```cpp
Auton skillsAuton = Auton("Skills", [](){
    //Auton code here
});
```