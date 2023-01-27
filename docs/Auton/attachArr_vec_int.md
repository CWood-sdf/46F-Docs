---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: attachArr(std::vector&lt;int&gt;)
---
# Auton& attachArr(std::vector&lt;int&gt; arr)
Attaches a potentiometer array to the auton. This function is only used internally, but it can be used if the user wants to attach a potentiometer array manually.

## Parameters
- `arr` - The values that the potentiometer will return when the auton is selected

## Returns
A reference to the auton.

## Example
```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
};

skillsAuton.attachArr(vector<int>({1, 2, 3}));
```

{: .note}