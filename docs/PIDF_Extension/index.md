---
    parent: Docs
    layout: default
    has_children: true
    title: PIDF_Extension
---
# PIDF_Extension
A class that can extend and customize the abilities of a PIDF controller. This class has near full control over all the PIDF values at nearly every stage of the speed calculation process. 

The default version of this class does nothing, it is the implementations that you can make that are important.

## Why
I made this class to implement [derivative EMA filtering](https://theol0403.github.io/7842F-Programming-Journal/2019-08-19/robot-showcase/), but it is designed to be used for literally anything. All the functions explained here are virtual, so you can override them to do whatever you want, or you could leave them in their default state of doing nothing. 

## How to use
To use this class, you must create a class that inherits from this class. You can then override any of the functions that you want to change.
```cpp
class MyPidfExtension : public PIDF_Extension {
    //override functions here
};
```
Then, you can pass a shared pointer to this class to the PIDF constructor.
```cpp
std::shared_ptr<PIDF_Extension> ext = std::make_shared<MyPidfExtension>();
PIDF pidf = PIDF(1, 2, 3, 4, ext);
```