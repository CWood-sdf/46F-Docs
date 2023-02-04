---
    parent: Docs
    layout: default
    has_children: true
    title: VectorArr
---
# VectorArr
A class that represents an array of PVectors

## Explanation
This class is basically just a kinda bad wrapper for a `deque<PVector>` it has really only two reasons for existence:
1. To make code more readable (it's easier to understand what a `VectorArr` is than a `deque<PVector>` just by looking at it)
2. To make the methods better named (I really don't like the C++ convention of putting underscores in variable names)