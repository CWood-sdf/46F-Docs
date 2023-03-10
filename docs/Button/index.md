---
    parent: Docs
    layout: default
    has_children: true
    title: Button
---
# Button
A class that makes an object that allows buttons to be made and used easily.

## Inner Workings
There's nothing too complicated about this class, it is basically just a regular rectangle button. 

It stores an x, y, width, and height variables. In addition, it stores a label and a label offset, and two colors, one for being drawn normally, and one for being drawn on press.

The press function is pretty simple, it just checks if the brain x and y pressing spots are inside the button:
```py
if brain is pressing
   and touchX >= x
   and touchY >= y
   and touchX <= x + width
   and touchY <= y + height
then
    button is being pressed
```

The draw function is also really simple, it just draws the label at the offset, and the rectangle
```py
if isPressing()
    set Brain draw color to pressColor
else
    set Brain draw color to normalColor
draw rectangle on Brain at (x, y) with dimensions (width, height)

print label on Brain at (x + textXOffset, y + textYOffset) 
```

## Usage
Using this class is super easy, one just has to declare a button using one of the constructors, then every time the button needs to be draw, call the draw function. Then the user can use one of the pressed functions

```cpp

Button button(0, 0, 100, 50, color(255, 0, 0), color(200, 0, 0), "Click me!", 30, 20);

if(button.clicked()){
    //do something
}
```