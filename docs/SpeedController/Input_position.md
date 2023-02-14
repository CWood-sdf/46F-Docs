---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input::position
---
# PVector Input::position
This is the current position of the robot. It is the position that the robot is currently at.

## Example
```cpp
class DoNothingController : public SpeedController {
public:
    void init() override {
        cout << "I'm doing nothing!" << endl;
    }
    followToRet followTo(Input& input) override {
        //Kinda a bad p controller
        double dist = input.position.dist(input.target);
        return { {dist, forwardVel::pct}, {0, angularVel::pctDiff} };
    }
};
```
