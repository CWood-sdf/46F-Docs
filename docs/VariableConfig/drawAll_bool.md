---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: drawAll(bool)
---
# static bool drawAll(bool)
A static function that draws all variable configs in the order that they were created, and draws the next variable config if the previous one has been selected

## Parameters and Returns
Both of these are for use by the brainOS library, and should not be used by the user. The user should add this function to the brainOS using the [addNewFn](../BosFn/addNewFn_BosFn) method. 

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Options");
VariableConfig config2 ({"ok 1", "ok 2", "ok 3"}, "Oks");

BosFn::addNewFn(VariableConfig::drawAll);
```