---
    title: PVector
    parent: Docs
    has_children: true
    layout: default
---
# PVector
This class can be used to represent a 2D or 3D vector. This class is heavily modified from the [source code](http://www.javased.com/?source_dir=SPaTo_Visual_Explorer%2Flib%2Fsrc%2Fcore%2Fsrc%2Fprocessing%2Fcore%2FPVector.java) I found on the internet. 

Vectors are used everywhere in my odometry and path planning algorithms. This class makes it really easy to manipulate vectors, especially with the additions I made to it. 

## Inner Workings
This class is actually not a class, it is a union. A union in C++ is a data structure where all the members share the same memory code. In this case, the members are an anonymous struct holding the class members, and a 3-element array of doubles. 
```cpp
union PVector {
    struct 
    {
        double x, y, z;
    };
    double arr[3] = {0.0, 0.0, 0.0};
};
```
This allows the variables to be accessed by name (e.g. `v.x`) or by array-like syntax (e.g. `v.arr[0]`). To be honest, I don't really use the array syntax, but it's there if you need it, and it also requires literally zero extra memory and runtime, so there's not really a reason to not have it. 

