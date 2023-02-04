---
    parent: VariableConfig
    layout: default
    grand_parent: Docs
    title: VariableConfig(vector&lt;string>, string, int)
---
# VariableConfig(vector&lt;string> options, string title, int defaultOption)
Makes a new VariableConfig with the given options, title, and default option.

## Parameters
- `options` - The options to choose from.
- `title` - The title of the VariableConfig.
- `defaultOption` - The index of the default option.

## Example
```cpp
VariableConfig config({"Option 1", "Option 2", "Option 3"}, "Title", 1); // Defaults to "Option 2"
```