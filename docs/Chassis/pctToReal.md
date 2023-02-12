---
    parent: Chassis
    layout: docs-math
    grand_parent: Docs
    title: pctToReal(double)
---
# double pctToReal(double speedPct)
Converts percent speed to inches per second

## Parameter
- `speedPct` - The speed in percent to convert to inches per second

## Returns
The speed in inches per second

## Explanation
This function uses the equation: 

$ p_(ct) / 100 \* m_("otorRpm") / g_(earRatio) \* 2 \* Pi / 60 \* r_(adius) $

## Example
