---
    parent: Docs
    layout: math
    has_children: true
    title: Inertial
---
# Inertial
A wrapper for the inertial sensor that autocorrects any drift in the sensor's readings. 

## Reason
The inertial sensor is a very useful sensor, but most of them have a (sometimes) significant problem: drift. The worst inertial sensor I have ever seen would read 350 degrees after a full turn, and they usually read about 357 after a full turn. This is a problem because it is very difficult to use the inertial sensor for anything that requires precision. This class fixes that by assuming that the change in sensor error is proportional to the change in sensor value, and then corrects it.

## Inner Workings
This function keeps track of the change in sensor value over time, and then uses that to correct the sensor value. This is done with this equation:

$ \text{new correct value} = \text{last correct value} + \text{change in sensor value} \* frac{360}{\text{reading on full turn}}  $

This equation is used to correct the sensor value every time the private `update()` function is called by the Positioner::update() function. This function is called every 10 milliseconds, so the sensor value is corrected every 10 milliseconds.

## Usage
Using this class is super simple, the user first has to measure the sensors full turn values, then use them. The Positioner class manages all the background processes for this class. 

```cpp
Inertial i = Inertial(PORT1, 358, 358);

//Put inertial in positioner constructor
Positioner p = Positioner(... i ...);
```