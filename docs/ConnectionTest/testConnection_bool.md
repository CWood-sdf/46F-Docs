---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: testConnection(bool)
---
# void testConnection(bool)
A drawing function that tests all the devices to make sure they are connected and working properly.

## Usage
This function is designed to be added to the BrainOS list. It will print the name of each device and its port and whether it is connected or not. This allows you to easily see any devices that are not connected. 
```cpp
int main(){
    BrainOS::addNewFn(testConnection);
    thread BrainOSThread(BrainOS::runBrainOS);
}