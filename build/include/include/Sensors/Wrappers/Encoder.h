﻿#ifndef ENCODER_H
#define ENCODER_H
#include "stuff.h"
#include "v5_apitypes.h"
#include "vex_device.h"
#include "vex_triport.h"
#include <functional>
// A simple encoder wrapper, the only functions are getPosition and resetPosition
class Encoder
{
    // encoder sdfsd = encoder(Brain.ThreeWirePort.A);
    // const V5_DeviceType encoderType = V5_DeviceType::kDeviceTypeMotorSensor;
    std::function<double(rotationUnits)> getValue;
    std::function<void()> resetter;
    // static inline devices device = devices();
public:
    // The constructor, only enable if the type has been mapped
    // The constructor, only enable if the type has been mapped
    template <class Sensor>
    Encoder(Sensor& e, decltype(&Sensor::resetPosition) = nullptr)
    {
        cout << "Init encoder" << endl;
        getValue = [&e](rotationUnits units)
        {
            return e.position(units);
        };
        resetter = [&e]()
        {
            e.resetPosition();
        };
    }
    template <class Sensor>
    Encoder(Sensor& e, decltype(&Sensor::resetRotation) = nullptr)
    {
        getValue = [&e](rotationUnits units)
        {
            return e.position(units);
        };
        resetter = [&e]()
        {
            e.resetRotation();
        };
    }
    template <class Sensor>
    Encoder(Sensor& e, std::function<void()> f)
    {
        getValue = [&e](rotationUnits units)
        {
            return e.position(units);
        };
        resetter = f;
    }
    // Constructor that just takes the functions
    Encoder(std::function<double(rotationUnits)> f, std::function<void()> r);
    Encoder();
    // Make the position method
    double position(rotationUnits units);
    void resetPosition();
    Encoder& operator=(const Encoder& other);
    Encoder& operator=(Encoder&& other);
};

#endif // ENCODER_H
