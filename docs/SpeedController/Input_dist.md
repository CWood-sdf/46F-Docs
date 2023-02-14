---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input::dist
---
# double Input::dist
This is the distance that the robot has to go to get to the target. However, if [useDistToGoal](../PathFollowSetting/UseDistToGoal) is set to false, this will return the distance the robot needs to go to be perpendicular to the target.

## Example
```cpp
class DoNothingController : public SpeedController {
public:
    void init() override {
        cout << "I'm doing nothing!" << endl;
    }
    followToRet followTo(Input& input) override {
        //Kinda a bad p controller
        double dist = input.dist;
        return { {dist, forwardVel::pct}, {0, angularVel::pctDiff} };
    }
};
```