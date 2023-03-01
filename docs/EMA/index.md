---
    parent: Docs
    layout: math
    has_children: true
    title: EMA
---
# EMA
A class that does an EMA filter on data. 

## Inner Workings
An EMA (or Exponential Moving Average) filter is a filter that has a weight value ($ alpha $) and updates the filter with the new data and the weight value. This weight value needs to be between 0 and 1. The weight determines how much the filter is affected by new data. A weight of 1 means that the filter will set its value to the input data, a weight of 0 means that the filter will not use the data at all. 

It is governed by the really simple math equation: 

$ \text{new value} = alpha * \text{sensor value} * (1 - alpha) * \text{last value} $

## Usage
To use the EMA class, the user simply has to make an EMA object with their alpha value and call the update function every time they have a new sensor value:
```cpp
EMA e = EMA(0.5);

void updateEma(){
    while(1){
        double val = e.update(sensor.value());
        //do something with number
    }
}
```