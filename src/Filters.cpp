#include "Filters.h"
template <class G, class T>
G converter_def(T val)
{
    return val;
}
template <class Get_T, class T, Get_T (*converter)(T)>
BasicEMA<Get_T, T, converter>::BasicEMA(double alpha)
{
    this->alpha = alpha;
}
template <class Get_T, class T, Get_T (*converter)(T)>
BasicEMA<Get_T, T, converter>::BasicEMA(double alpha, T val) : BasicEMA<Get_T, T, converter>(alpha)
{
    seed(val);
}

template <class Get_T, class T, Get_T (*converter)(T)>
void BasicEMA<Get_T, T, converter>::update(T sensorVal)
{
    val = sensorVal * alpha + oldVal * (1 - alpha);
    oldVal = val;
}
template <class Get_T, class T, Get_T (*converter)(T)>
T& BasicEMA<Get_T, T, converter>::valRef()
{
    return val;
}
template <class Get_T, class T, Get_T (*converter)(T)>
Get_T BasicEMA<Get_T, T, converter>::value()
{
    return converter(val);
}
template <class Get_T, class T, Get_T (*converter)(T)>
BasicEMA<Get_T, T, converter>::operator Get_T()
{
    return value();
}
template <class Get_T, class T, Get_T (*converter)(T)>
void BasicEMA<Get_T, T, converter>::seed(T value)
{
    val = value;
}
template <class Get_T, class T, Get_T (*converter)(T)>
BasicEMA<Get_T>& BasicEMA<Get_T, T, converter>::operator=(const BasicEMA<Get_T>& input)
{
    val = input.val;
    alpha = input.alpha;
    return *this;
}

SMA::SMA(size_t size)
{
    this->size = size;
}
SMA::SMA(size_t size, double val) : SMA(size)
{
    seed(val);
}
void SMA::update(double sensorVal)
{
    vals.pushBack(sensorVal);
    while (vals.size() > size)
    {
        vals.popBase();
    }
}
double SMA::value()
{
    double sum = 0;
    for (auto& val : vals)
    {
        sum += val;
    }
    return sum / vals.size();
}
SMA::operator double()
{
    return value();
}
void SMA::seed(double value)
{
    vals.clear();
    vals.pushBack(value);
}
SMA& SMA::operator=(const SMA& input)
{
    size = input.size;
    vals = input.vals;
    return *this;
}