---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: isSelected()
---
# static bool isSelected()
Returns if an auton has been selected on the VariableConfig screen.

## Returns
True if an auton has been selected on the VariableConfig screen, false otherwise.

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
void autonomous(){
    //This loop prevents the potentiometer dial from being used to select an auton
    while(!Auton::isSelected()){
        task::sleep(20);
    }
    Auton::callAuton();
}
```