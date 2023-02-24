---
    parent: PIDF
    layout: docs
    grand_parent: Docs
    title: getKVals()
---
# KVals getKVals()
Returns a copy of the KVals of the PIDF

## Example
```cpp
PIDF pidf = PIDF(1, 1, 1);
auto kvals = pidf.getKVals();
cout << kvals.p << endl; //Prints 1
```