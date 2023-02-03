---
    parent: Docs
    layout: default
    has_children: true
    title: VariableConfig
---
# VariableConfig
A class that allows the user to select variable options on the brain screen. For the most part, this class is just used for auton selecting, but it can be used for other things as well.

## Major Features
- Allows the user to select variables on the brain screen
- Allows a bypass function to be added in to skip configuration in certain cases
- Allows a callback to be added that is called when the configuration is complete
- Allows a default option

## Inner Workings
This class isn't too complicated, except for the draw function (kinda)
The draw function basically makes a tile of [Buttons](.../Button/index) that can be clicked.

Really, on the front-end this class isn't too complicated. 