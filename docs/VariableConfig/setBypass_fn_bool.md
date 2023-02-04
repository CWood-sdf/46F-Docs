---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: setBypass(function&lt;bool()>)
---
# void setBypass(function&lt;bool()> bypass)
Sets the bypass function of the variable config

## Parameters
- `bypass` - The bypass function to be set

## Explanation
The bypass function is called every frame the variable config is drawn. When the bypass function returns true, the variable config is set to the default option and instantly ends. This is useful for when you want to set the variable config to a default option when a certain condition is met.

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title", 1, [](int i) {
    // Uses i + 1 because the index starts at 0, but the names start at 1
    std::cout << "Option " << i + 1 << " was selected" << std::endl;
});

config.setBypass([]() {
    return true;
}); // This will force the variable config to always select the default option

```