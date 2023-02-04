---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: setOptionName(int, string)
---
# void setOptionName(int index, string name)
Sets the name of the option at the given index

## Parameters
- `index` - The index of the option to be renamed
- `name` - The new name of the option

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title");
config.setOptionName(0, "New Option 1");
```