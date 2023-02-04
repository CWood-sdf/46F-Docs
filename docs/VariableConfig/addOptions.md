---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: addOptions(vector&lt;string>)
---
# void addOptions(vector&lt;string> options)
Adds multiple options to the variable config

## Parameters
- `options` - The options to be added

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title");
config.addOptions({"Option 4", "Option 5"});
```
