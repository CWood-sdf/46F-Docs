---
    parent: Button
    layout: docs
    grand_parent: Docs
    title: clicked()
---

# bool clicked()

If the button is being pressed, this function blocks up control flow until the button is released, then it returns true. If the button is not pressed, it returns false.

{: .note}
This function should not be used in the same loop as things that must be updated often (like motor speeds or sensor values), because it blocks up control flow until the button is released. For these cases, use [pressed()](pressed.md) or [released()](released.md).

## Example

```cpp
brain Brain;
Button button(brain, 0, 0, 100, 50, color(255, 0, 0), color(200, 0, 0), "Click me!", 30, 20);

while(true) {
    if (button.clicked()) {
        //Do something
    }
}
```

{: .note}
