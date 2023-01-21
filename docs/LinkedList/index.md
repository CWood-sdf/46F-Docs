---
    parent: Docs
    layout: default
    title: LinkedList&lt;T&gt;
---

# LinkedList&lt;T&gt;

This is one of the largest pieces in this library (it's probably about even with [WheelController](../WheelController/index.md)). It's a doubly-linked list that can be used to store any type of data. It's a very useful data structure.

The advantages of using a double linked list are:

- You can add and remove elements from anywhere in the list in constant time, where as, with an array, all the elements after the one you're adding or removing have to be shifted.
- You can iterate through the list in either direction, which is useful if you want to iterate through the list backwards, however, array iteration is much faster.

The disadvantages of using a double linked list are:

- It takes up (a little bit) more memory than an array, because it has to store the pointers to the previous and next elements. Honestly, I wouldn't worry about this, because the memory difference is so small that it's not worth worrying about.
- You can not randomly access elements. If you want to access an element at a specific index, you have to iterate through the list until you get to that index. This is why I recommend using an array if you know you're going to be accessing elements by index.

## Inner Workings

A double linked list is pretty simple, it's just a bunch of nodes that are linked together. Each node has a pointer to the next node, and a pointer to the previous node. The first node in the list is called the head, and the last node in the list is called the tail. The head's previous pointer is null, and the tail's next pointer is null. The diagram below shows a double linked list with 3 nodes.

![Double Linked List](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png)
