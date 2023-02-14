---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input::chassis
---
# Chassis* Input::chassis
A pointer to the chassis object that is being used. 

## Example
```cpp
class DoNothingController : public SpeedController {
public:
    void init() override {
        cout << "I'm doing nothing!" << endl;
    }
    followToRet followTo(Input& input) override {
        return { {input.chassis->getSpeedLimit(), forwardVel::pct}, {input.angleTarget - input.currentAngle, angularVel::pctDiff} };
    }
};
```