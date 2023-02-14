---
    parent: SpeedController
    layout: docs
    grand_parent: Docs
    title: followTo(Input&amp;)
---
# pair&lt;pair&lt;double, ForwardVel&gt;, pair&lt;double, AngularVel&gt;&gt; followTo(Input&amp; input)
Returns the speeds for the robot to drive at

## Parameter
- `input` - The input for the controller to use for data

## Returns
A pair of pairs. The first pair is the forward speed and the second pair is the angular speed. The first value of the pair is the speed and the second value is the type of speed.

## Implementation Notes
This function must be implemented by the user if they are to make their own speed controller. This function is called in every iteration of the `followPath` function.

## Example
```cpp
class PidController2 : public SpeedController {
    PID ctrl;
    PID turnCtrl;
public:
    void init(){
        //setTarget() clears out all integral data and stuff
        ctrl.setTarget(0);
        turnCtrl.setTarget(0);
    }
    followToRet followTo(Input& input){
        //Kinda a bad p controller
        double dist = input.dist;
        double turn = input.targetAngle - input.currentAngle;
        return { {ctrl.getVal(dist), forwardVel::pct}, {turnCtrl.getVal(turn), angularVel::pctDiff} };
    }
};
```