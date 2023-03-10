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

All angles that this class uses are in degrees, and all angles that this class returns are in degrees. This is because degrees are much easier to read, however ALL standard trig functions in C++ use radians, and radians are also the natural unit for any function that generates an angle. 
{: .warning }
## Notes
- Quite possibly the most useful function in this class is the [angleTo](angleTo_PVector) function. The second most useful function is the [rotate](rotate_double) function.
- Another important point is that in this class, a positive change in the Y-direction is the forward direction, and a positive change in the X-direction is the right direction. This is the opposite of what most people are used to, but it is the standard in vex, so when you are using any code that uses vectors, make sure to check the math to see if it works out with these vectors.
- Another important point is that all the angles are clockwise based, meaning that a positive angle change moves the vector clockwise. This is the opposite of what most people are used to, but, once again, it is the standard in vex, so when you are using any code that uses vectors, make sure to check the math to see if it works out with these vectors.
- All the useful operators are overloaded, so you can make your vector math look like actual math, not a billion function calls, like this:
```cpp
PVector v1 = PVector(1, 2, 3);
PVector v2 = PVector(4, 5, 6);
PVector v3 = (v1 + v2) * 2.0;
```
rather than the Java style:
```java
PVector v1 = new PVector(1, 2, 3);
PVector v2 = new PVector(4, 5, 6);
PVector v3 = PVector.mult(PVector.add(v1, v2), 2.0);
```