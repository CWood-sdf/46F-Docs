---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input::angleTarget
---
# double Input::angleTarget
This is the target angle of the robot in degrees. 

## Example
```cpp
class DoNothingController : public SpeedController {
public: 
    followToRet followTo(Input& input) override {
        //Kinda a bad p controller
        double dist = input.position.dist(input.target);
        return { {dist, forwardVel::pct}, {input.angleTarget - input.currentAngle, angularVel::pctDiff} };
    }
};
```