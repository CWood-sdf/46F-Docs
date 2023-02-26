---
    parent: ButtonLatch
    layout: default
    grand_parent: Docs
    title: ButtonLatch(controller::button&amp;, int = 2)
---
# ButtonLatch(const controller::button&amp; button, int stateLimit = 2)
This constructor creates a ButtonLatch object with the given button and state limit.

## Parameters
- `button` - The button to use.
- `stateLimit` - The maximum state of the button. Defaults to 2.

## Example
```cpp
controller Controller = controller(primary);
ButtonLatch upLatch = ButtonLatch(Controller.ButtonUp);

//Creates a button latch that has 4 states
ButtonLatch downLatch = ButtonLatch(Controller.ButtonDown, 4);
```