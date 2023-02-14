---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: deInit()
---
# virtual void deInit()
This function is called when the `followTo` function finishes. It can be used for anything you want to do after the `followTo` function finishes. For example, you can use it to reset the PID controller.

## Implementation Notes
This function does not have to be implemented, as it is already defaulted to do nothing.

## Example Implementation
```cpp
class DoNothingController : public SpeedController {
public:
    void deInit() override {
        cout << "I'm done doing nothing!" << endl;
    }
    followToRet followTo(Input& input) override{
        return { {10, forwardVel::pct}, {0, angularVel::pctDiff} };
    }
};
```