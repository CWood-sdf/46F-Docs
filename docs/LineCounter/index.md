---
    parent: Docs
    layout: default
    has_children: true
    title: LineCounter
---
# LineCounter
A class that uses a line tracker to count the number of objects that pass by it.

## Why
This class is so useful for any type of counting or switch operation. The problem with limit switches is that they break on basically anything, and bumper switches require a 10 ton weight on them to work. This class, however, can count objects within about half an inch without actually touching them. 

Back in Change Up, I saw people putting line trackers on their intake to count the number of balls they had. I tried doing it with a limit switch, but it literally broke on the first or second ball that went through the intake. So I made this class

## How
The vexcode API provides the line tracker with a `reflectivity()` function this function usually returns about 9 in open air, but when an object goes near, it spikes to about 20. So, I have a thread that updates all the line counters in the background and checks if the reflectivity is above a certain threshold. If it is, then it increments the counter. 

## Usage
This class keeps track of 2 values, the number of objects that have started to pass by, and the number of objects that have passed by. 

```cpp
LineCounter l = LineCounter(Brain.ThreeWirePort.A);

cout << l.getCountIn() << ", " << l.getCountOut() << endl;

```

