---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: init()
---
# virtual void init()
This function is called when the `followTo` function starts up. It can be used for anything you want to do before the `followTo` function starts. For example, you can use it to reset the PID controller.

## Implementation Notes
This function does not have to be implemented, as it is already defaulted to do nothing.

## Example Implementation
```cpp
class DoNothingController : public SpeedController {
public:
    void init() override {
        cout << "I'm doing nothing!" << endl;
    }
    followToRet followTo(Input& input) override{
        return { {10, forwardVel::pct}, {0, angularVel::pctDiff} };
    }
};
```