---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: hasDefault()
---
# bool hasDefault()
Returns whether the variable config has a default option

## Returns
Returns `true` if the variable config has a default option, `false` otherwise

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title", 1);

if (config.hasDefault()) {
    std::cout << "There is a default option" << std::endl;
}
```