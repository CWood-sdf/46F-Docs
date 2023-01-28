---
    parent: Docs
    layout: default
    has_children: true
    title: BosFn
---
# BosFn
A very simple wrapper for the BrainOS functions.

{: .note}
All of the methods are designed for internal use, and are not meant to be used by the user. The user simply has to declare a function and add it to the `bosFns` list.

## Inner Workings
There are two types of BosFn functions, ones that return a boolean, and ones that don't. BosFn functions that return a boolean have the ability to remove themselves from the BrainOS function list if they return true. 
Also, all BosFns are first called with a true parameter, and then with a false parameter every other time. This is so that the user can use the parameter to remake lvgl objects, because they are deleted when the screen is switched. 

## Usage
To use a BosFn, the user just needs to declare a function, then add it to the `bosFns` list
```cpp
void myBosFn(bool remake){
    //drawing code here
}
int main(){
    bosFns.pushBack(myBosFn);
}
```
For lvgl functions, the user MUST use the remake parameter to make lvgl objects. Also, the bosFn functions as both a first drawing function, then as an animation function. Because of this, the user does not need to make any seperate lvgl animations to move the object around. 
```cpp
void myBosFn(bool remake){
    static lv_obj_t* myObj;
    if(remake){
        //create lvgl objects here
        myObj = lv_obj_create(lv_scr_act());
    }
    //do any object animation code here
}
int main(){
    bosFns.pushBack(myBosFn);
}
```