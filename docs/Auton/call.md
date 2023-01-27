---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: call()
---
# Auton& call()
Calls the auton's function. For the most part this function is only used internally, but it can be used if the user wants to call the auton function manually.

## Returns
A reference to the auton. 

## Example
```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
};
void autonomous(){
    skillsAuton.call();
}
```