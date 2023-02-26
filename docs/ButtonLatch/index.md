---
    parent: Docs
    layout: default
    has_children: true
    title: ButtonLatch
---
# ButtonLatch
This class is used to create a button that can be pressed and held down, and will only register a press once.

## Why
Using pneumatics to control a robot is a very common thing to do. However, if one just uses a button and the `button::pressing()` function in their drivercontrol, the pneumatics will cycle back and forth extremely rapidly and you will have no control over the robot. There are two ways you could fix this: insert a sleep command into the drivercontrol, and hope the driver releases the button in time, or use the vex `button::pressed()` callback functions. However, both of these are a bad idea. The first one is bad because it will cause the driver to have no control over the robot for a short period of time, and the second one is bad because the user then has to seperate out their driver code into multiple functions which is just harder to understand. This class solves this problem by allowing the user to create a button that can be pressed and held down, and will only register a press once.

## Inner Workings
This class uses a boolean variable (`lastPressed`) to keep track of whether the button was pressed on the last function call or not. If the button is pressed, and `lastPressed` is false, then the button has been pressed in the last 10 or so milliseconds, thus the latch is set to true. If the button is pressed and `lastPressed` is true, then the latch is set to false. If the button is not pressed, then `lastPressed` is set to false.

```py
ret = false
if button is pressing and not lastPressed:
    ret = true
lastPressed = button is pressing
return ret
```

However, on top of this, the class also can keep track of a value called `state`, which is incremented everytime the latch is true. This state is reset back to 1 when the state is greater than the number of states. This is useful for creating a button that can be pressed multiple times, and each press will do something different.