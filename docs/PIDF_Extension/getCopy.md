---
    parent: PIDF_Extension
    layout: docs
    grand_parent: Docs
    title: getCopy()
---
# PIDF_Extension\* getCopy()
Returns a copy of the PIDF_Extension allocated off the heap

## Example
```cpp
struct MyExtension : public PIDF_Extension {
    PIDF_Extension* getCopy() {
        return new MyExtension();
    }
};
```