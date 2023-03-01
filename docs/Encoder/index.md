---
    parent: Docs
    layout: default
    has_children: true
    title: Encoder
---
# Encoder
This is one of my favorite pieces of code in this entire library. It is a tiny little class that just saves me so much time and work. 

It is a class that is a simple encoder wrapper. It has 2 methods: `position()` and `resetPosition()`.

## Why
C++ is a strongly typed language, thus we cannot just pass around random types of data and expect the compiler to be happy. Yet, the vex API, at the time of writing this, has 3 different encoder classes: `vex::encoder`, `vex::rotation`, and `vex::motor`. This means that if you want to use an encoder, you have to use one of these classes. This is a problem because these classes are not interchangeable. For example, if you want to use a `vex::motor` as an encoder, you cannot just pass it into a function that takes a `vex::encoder`. This is where this class comes in. It is a wrapper for the main functions of an encoder: `position()` and `resetPosition()`. This means that, rather than having to decide which type of encoder you will use in your code, you can just use this class and make edits on the fly in your robot-config.h file without having to make major class structure changes.

## How
This class is designed not to be a template class, because if I had to specify the encoder type in a template parameter, its whole purpose would be defeated. So, what I do is I take  the encoder given in the constructor and I store its `position()` and `resetPosition()` functions in a lambda that captures the pointer. This means that the lambda will internally store a copy of the encoder and what type it is without me having to worry about it. For this to work, the encoder must never go out of scope or be destructed. (Either by making it global, or allocating it on the heap with `new`). 

Now this would be pretty simple, if all the functions were named the same, I could just have my constructor be this:
```cpp
template<typename EncoderTp>
Encoder(EncoderTp& encoder) {
    getPosition = [&encoder](){
        return encoder.position();
    };
    resetPosition = [&encoder](){
        encoder.resetPosition();
    };
}
```

But, the vex API, as of writing this, has 2 different function names: rotation and position. And, I want this class to be as generalized as possible just in case the API changes later, or a new sensor gets introduced. So I use a C++ concept called SFINAE ((template) substitution failure is not an error) to check if the encoder has a `position()` function, and if it doesn't, it checks if it has a `rotation()` function. If neither of these functions exist, then it will not compile. I use a sneaky little form of it I found on stack overflow: basically, I add a second parameter that takes a pointer to a function that is of the same type as the encoder's `resetPosition()` function. If the encoder has a `resetPosition()` function, then the compiler will be able to find the function and will use it. If it doesn't, then it will not be able to find the function and we get a substitution failure. I then do the same for `resetRotation()`. This is the code for the constructor:

```cpp
template<class EncoderTp>
Encoder(EncoderTp& encoder, decltype(&EncoderTp::resetPosition) = nullptr) {
    getPosition = [&encoder](rotationUnits units){
        return encoder.position(units);
    };
    resetPosition = [&encoder](){
        encoder.resetPosition();
    };
}
template<class EncoderTp>
Encoder(EncoderTp& encoder, decltype(&EncoderTp::resetRotation) = nullptr) {
    getPosition = [&encoder](rotationUnits units){
        return encoder.rotation(units);
    };
    resetPosition = [&encoder](){
        encoder.resetRotation();
    };
}
```

## Usage
Actual usage of this class is super simple, just declare an Encoder then use it like any regular encoder:

```cpp
rotation s = rotation(PORT1);

Encoder e = Encoder(s);

cout << e.position(deg) << endl;
```