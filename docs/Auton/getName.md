---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: getName()
---
# std::string getName()
Gets the name of the auton.

## Returns
The name of the auton.

## Example
```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
};
void autonomous(){
    std::cout << skillsAuton.getName() << std::endl;
    //Prints "Skills"
}
```