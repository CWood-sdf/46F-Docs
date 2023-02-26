---
    parent: Docs
    layout: math
    has_children: true
    title: PotDial
---
# PotDial
This class allows the potentiometer to be used as a dial. As of writing this, this class is about to be used on my states robot, so it should get some testing soon. The math however is pretty simple, and I have tested the math in a khan academy page and a desmos page, so I am pretty sure it works. 

## Inner Workings
The math behind it is fairly simple, it just requires a bit of linear manipulation. 

First, as when one is manipulating any line, we must first make it go through the origin. For the potentiometer dials that may have a base value, we subtract the base value given in the constructor from the value returned by the potentiometer.

$ \text{intermediate 1} = \text{potentiometer value} - \text{base value} $

Then, we must scale the value to be between 0 and 1. This is done by dividing the value by the range of the dial.

$ \text{intermediate 2} = \text{intermediate 1} / \text{range} $

Then, we must scale the value to be between 0 and the number of values. This is done by multiplying the value by the number of values.

$ \text{intermediate 3} = \text{intermediate 2} * \text{number of values} $

Then, we must floor the value and add one, so that the output is an integer in the range $ [1, number of values] $.

$ \text{output} = \lfloor \text{intermediate 3} \rfloor + 1 $

## Using the constructors
Both of the constructors take a parameter pack of values. These values are sent over to the private constructors which set the values of the internal variables. However, these private constructors can not be accessed by the user, so the user must use the public constructors. All the private constructors are marked with a \[private\] tag in the documentation.