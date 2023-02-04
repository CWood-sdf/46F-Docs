---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: isSelected()
---
# bool isSelected()
Returns whether the variable config has had an option selected

## Returns
Returns `true` if the variable config has had an option selected, `false` otherwise

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title");
if (config.isSelected()) {
    std::cout << "Selected " << config.getSelectedOption() << std::endl;
}
```