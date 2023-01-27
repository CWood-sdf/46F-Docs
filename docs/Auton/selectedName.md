---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: selectedName()
---
# static std::string selectedName()
Gets the name of the selected auton, returns an empty string if no auton has been selected on the VariableConfig screen.

## Returns
The name of the selected auton.

## Example
```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
};
Auton rightAuton = "Right" + [](){
    //Auton code here
};
Auton leftAuton = "Left" + [](){
    //Auton code here
};
//later in the code
std::cout << Auton::selectedName() << std::endl;
//Prints the name of the selected auton
```