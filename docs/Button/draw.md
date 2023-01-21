---
    parent: Button
    layout: docs
    grand_parent: Docs
    title: draw()
---

# void draw()

Draws the button.

## Example

```cpp
brain Brain;
Button button(brain, 0, 0, 100, 50, color(255, 0, 0), color(200, 0, 0), "Click me!", 30, 20);

//... later in the code
button.draw();
```
