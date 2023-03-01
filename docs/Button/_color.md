---
    parent: Button
    layout: default
    grand_parent: Docs
    title: Button(int, int, int, int, color, color, string, int, int)
---

# Button(int x, int y, int width, int height, color fill, color pressFill, string label, int xOffset = 0, int yOffset = 0)

Makes a button with the given parameters.

## Parameters

- `x` - The x position of the button.
- `y` - The y position of the button.
- `width` - The width of the button.
- `height` - The height of the button.
- `fill` - The color of the button.
- `pressFill` - The color of the button when pressed.
- `label` - The text to display on the button.
- `xOffset` - The x offset of the text.
- `yOffset` - The y offset of the text.

## Example

```cpp
Button button(0, 0, 100, 50, color(255, 0, 0), color(200, 0, 0), "Click me!", 30, 20);
//This button will darken slightly when pressed. This provides a visual feedback to the user.
```
