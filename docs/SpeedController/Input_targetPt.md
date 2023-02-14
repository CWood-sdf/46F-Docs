---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: Input::targetPt
---
# Path::El Input::targetPt
This is the target bezier point of the robot. It is a [Path::El](../Path/El), so it holds any data the target path point holds. 

## Example
```cpp
class DoNothingController : public SpeedController {
public:
    followToRet followTo(Input& input) override {
        //Kinda a bad p controller
        double dist = input.position.dist(input.target);
        //This usage of curvature is bad because it uses the target curvature, not the current curvature
        return { {input.targetPt.targetSpeed, forwardVel::pct}, {input.targetPt.curvature, angularVel::curvature} };
    }
};
```