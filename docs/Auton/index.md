---
    parent: Docs
    layout: default
    title: Auton
    has_children: true
---
# Auton
A wrapper for an autonomous that automatically adds the auton to a [VariableConfig](../VariableConfig/index) that also has integrated support for a potentiometer dial (though I have never used that part of the functionality). 

This class is designed for simplicity and ease of use, thus the user only needs to do 2 steps: declare the auton and call the static `callAuton()` function.

## Usage
This class automatically creates a VariableConfig and adds all the autons to it, the VariableConfig screen is added to the brain by default, so the user can select the auton they want to run just by declaring an Auton.

The auton is run by calling the static [callAuton()](callAuton) function, which will run the selected auton on the screen. If no auton has been selected on the screen, it will run the auton determined by the SelectorArr. 

```cpp
void autonomous(){
    //Runs the selected auton, no other lines are required
    Auton::callAuton();
}
```

Actually making an auton is very simple, the user just needs to declare the variable, function, and name together using the [operator+()](op_pl_charptr_fn) function. After the auton has been made, the variable NEVER has to be accessed because the class manages everything for the user. 


```cpp
Auton skillsAuton = "Skills" + [](){
    //Auton code here
};
```

or, if the user wants to use a potentiometer to select the auton, they can use the [operator+()](op_pl_charptr_vec_int) function. 

```cpp
Auton skillsAuton = "Skills" + vector<int>({1, 2, 3}) + [](){
    //Auton code here
};
```

{: .warning}
The SelectorArr has never been used in a competition bot, so I am not sure if it works (though I have done some tests with real potentiometers). The code all looks good, but anyone that wants to use it should run some tests first