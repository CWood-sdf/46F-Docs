---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: operator+(std::function&lt;void()&gt;)
---
# Auton&amp; operator+(std::function&lt;void()&gt; fn)
Adds a function to the auton.

{: .warning}
This function does NOT make a copy of the auton, it modifies the auton in place. Some of you might think that this function should be on the operator+= function, but I decided to put it on the operator+ function because I think it is actually more intuitive to use when making autons.

## Parameters
- `fn` - The function to add to the auton.

## Returns
A reference to the auton.

## Example
```cpp
Auton skillsAuton = "Skills" + vector<int>({3, 4}) + [](){
    //Auton code here
};
//The auton is made by the "Skills" + vector<int>({3, 4}), then modified by adding the function
```