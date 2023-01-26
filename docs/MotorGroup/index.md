---
    parent: Docs
    layout: default
    has_children: true
    title: MotorGroup
---

# MotorGroup

A class that functions as a motor group with integrated pto capabilities. This class is, in my opinion really useful for literally anything, and I prefer using this class over vex::motor_group and vex::motor.

## Inner Workings

At the heart of this class, is a simple standard library data structure called a vector. This is simply a resizable array of anything. When motors are added to the class, they are added to the vector. When the class is asked to do something, it simply loops through the vector and does the same thing to every motor in the vector. This is the same way that vex::motor_group works, but this class is much more powerful because of the addition of the pto functionality.

To contain all the pto information, I have a vector that stores a collection of pto information. Inside this collection is a boolean that tells which state the pneumatics drive in, a list of the pneumatics used, and a list of the indexes of the motors that are connected to the pneumatics.

To implement the setPtoDrive functionality required a bit of extra work. First, for the reinvoking functionality, I added another vector that stored the last motor power in volts for each of the motors. Then, when the pto is set to drive, the class simply loops through the vector of motors and sets the motor power to the last motor power in volts.

Implementing the pto functionality for releasing the pto was a bit more difficult. I had to have some way of having each motor be mapped to its various MotorGroup owners. For this, I used another standard library class called map which is just something that can find objects in logarithmic time. I made a static (shared by all objects) map that maps each motor to a vector of MotorGroup owners. Then, when the pto is released, it finds the motor in the map, and searches for the first MotorGroup owner that is not the current MotorGroup. Then, it asks the MotorGroup owner to reinvoke the motor spins.

{: .note }
None of what I said about the PTO will make sense right now, just wait for the examples and stuff in their functions.
