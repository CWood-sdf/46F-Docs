---
    parent: Auton
    layout: default
    grand_parent: Docs
    title: operator+(const char*, std::function&lt;void()&gt;)
---
# Auton operator+(const char* name, std::function&lt;void()&gt; fn)
Generates an auton from the name and function.

## Parameters
- `name` - The name of the auton.
- `fn` - The function to add to the auton.

## Returns
A new auton

## Example
```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
};
```