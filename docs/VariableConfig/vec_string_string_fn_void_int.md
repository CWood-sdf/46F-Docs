---
    parent: VariableConfig
    layout: default
    grand_parent: Docs
    title: VariableConfig(vector&lt;string>, string, function&lt;void(int)>)
---
# VariableConfig(vector&lt;string> options, string title, function&lt;void(int)> callback)
Makes a variable config with the given options, title, and callback

## Parameters
- `options` - The options to be displayed
- `title` - The title of the variable config
- `callback` - The callback to be called when the variable config is set

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title", [](int i) {
    // Uses i + 1 because the index starts at 0, but the names start at 1
    std::cout << "Option " << i + 1 << " was selected" << std::endl;
});
```
