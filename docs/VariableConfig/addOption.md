---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: addOption(string)
---
# void addOption(string option)
Adds an option to the variable config

## Parameters
- `option` - The option to be added

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title");
config.addOption("Option 4");
```
