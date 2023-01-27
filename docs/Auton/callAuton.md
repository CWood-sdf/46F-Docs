---
    parent: Auton
    layout: docs
    grand_parent: Docs
    title: callAuton()
---
# static void callAuton()
Calls the selected auton

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
    //Calls the auton that was selected on the brain screen
    //If no auton was selected, it will try the SelectorArr auton
    //If no auton was selected and there are no SelectorArr autons, it will do nothing
    Auton::callAuton();
}
```