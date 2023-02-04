---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: getSelectedOption()
---
# string getSelectedOption()
Gets the selected option of the variable config

## Returns
- `string` - The selected option name

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title");
config.setCallBack([&](int index){
    std::cout << "Selected " << config.getSelectedOption() << std::endl;
});
```