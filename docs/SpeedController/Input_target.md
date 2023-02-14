---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input::target
---
# PVector Input::target
This is the target position of the robot. It is the position that the robot is trying to get to. 

## Example
```cpp
class DoNothingController : public SpeedController {
public:
    void init() override {
        cout << "I'm doing nothing!" << endl;
    }
    followToRet followTo(Input& input) override {
        //Kinda a bad p controller
        double dist = input.chassis->botPos().dist(input.target);
        return { {dist, forwardVel::pct}, {0, angularVel::pctDiff} };
    }
};
```