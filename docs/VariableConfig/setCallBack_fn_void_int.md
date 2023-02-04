---
    parent: VariableConfig
    layout: docs
    grand_parent: Docs
    title: setCallBack(function&lt;void(int)>)
---
# void setCallBack(function&lt;void(int)> callback)
Sets the callback of the variable config

## Parameters
- `callback` - The new callback of the variable config

## Example
```cpp
VariableConfig config ({"Option 1", "Option 2", "Option 3"}, "Title");
config.setCallBack([](int i) {
    // Uses i + 1 because the index starts at 0, but the names start at 1
    std::cout << "Option " << i + 1 << " was selected" << std::endl;
});
```