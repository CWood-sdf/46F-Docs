---
    parent: Button
    layout: docs
    grand_parent: Docs
    title: pressing()
---

# bool pressing()

Returns true if the button is being pressed.

{: .note}
This function returns true for the entire duration of the press, not just when the button is first pressed, so it is recommended to not use this function for things that can only happen once per press. Instead use [pressed()](pressed.md), [clicked()](clicked.md), or [released()](released.md).

## Example

```cpp
brain Brain;
Button button(brain, 0, 0, 100, 50, color(255, 0, 0), color(200, 0, 0), "Click me!", 30, 20);

//... later in the code
if (button.pressing()) {
  //Do something
}
```
