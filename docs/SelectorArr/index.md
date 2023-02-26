---
    parent: Docs
    layout: default
    has_children: true
    title: SelectorArr
---
# SelectorArr
This class allows autons to be run based on the values from some potentiometer dials. This class has never been used or tested, so I am not sure if it will actually work, if you want to use it, please test it. 

## Inner Workings
This class holds a list of references to all the PotDials that are being used to select the auton. When the user calls the `getVal()` method, it will find the value of each dial, then return the value of the auton that corresponds to that value.

## Usage
To use this class, declare PotDials with a the last parameter set to `true`. Then, create SelectorArr objects, passing them the desired values of the dials in the order they were created, and the auton functions. Then, call the `getVal()` method to get the auton function that should be run.