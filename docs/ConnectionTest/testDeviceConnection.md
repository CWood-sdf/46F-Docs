---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: testDeviceConnection()
---
# void testDeviceConnection()
Performs a one-time test of all the devices to make sure they are connected and working properly.

## Usage
This function is called at the start of main. It will print the name of each device and whether it is connected or not. This allows you to easily see any devices that are not connected. 
```cpp
int main(){
    testDeviceConnection();
}
```
