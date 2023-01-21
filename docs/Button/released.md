---
    parent: Button
    layout: docs
    grand_parent: Docs
    title: released()
---

# bool released()

Returns true on the first loop iteration that the button is released, and false all other times.

{: .note}
This function does not block the loop, and thus should not be used in the same loop as things that can't happen when the button is pressing. For this case, use [clicked()](clicked.md).

## Example

```cpp
brain Brain;
Button button(brain, 0, 0, 100, 50, color(255, 0, 0), color(200, 0, 0), "Click me!", 30, 20);

//... later in the code
if (button.released()) {
  //Do something
}
```
