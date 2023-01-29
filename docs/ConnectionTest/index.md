---
    parent: Docs
    layout: default
    has_children: true
    title: ConnectionTest
---
# ConnectionTest
This is not a class, rather a collection of functions, macros, a struct, and a global variable.

What this does is automatically test the connection between the brain and ALL the declared v5 devices. It also tests motors for overheating. This prints all its data to a very nice screen that can be drawn on the [BrainOS](../BosFn/). This is a very useful tool especially when doing driver training or testing autons because this allows you to quickly debug errors. 

## Usage
Actually using this is pretty simple, just call the `TestDevice` macro with the v5 device. 
```cpp
motor motor1 = motor(PORT1);
TestDevice(motor1);
//Will display the device name ("motor1") and it's port (1)

motor motor2 = motor(PORT2);
TestDevice(motor2);
//Will display the device name ("motor2") and it's port (2)

inertial inertial1 = inertial(PORT3);
TestDevice(inertial1);
//Will display the device name ("inertial1") and it's port (3)
```

When the device is connected, it will display the device name and port in green. If the device is not connected, it will display the device name and port, but it will be red. If the device is a motor and it's overheating, it will display the device name and port, but it will be orange.

To actually use this functionality, add the `connectionTest` function to the BrainOS list of functions. 
```cpp
int main(){
    BrainOS::addNewFn(connectionTest);
    thread brainOSThread = thread(BrainOS::runBrainOS);
}
```

If you do not want to use the screen, you can call the `testDeviceConnection` function at the start of main. This will buzz the controller and print to the terminal if a device is not connected. 
```cpp
int main(){
    testMotorConnection();
}
```

Another useful function is to test the orientation of the drive motors. Since motors can be oriented clockwise or counterclockwise, this function will test the orientation of the motors. Simply add all the drive motors with `TestDriveMotor`  rather than `TestDevice` and then call `testDriveConfiguration` at the start of main. This function will individually spin all the drive motors forward for 1 second, print their name, then stop for 1 second. This allows you to easily see any motors that are spinning the wrong direction. 
```cpp
motor BL = motor(PORT1, ratio18_1, false);
TestDriveMotor(BL);

motor BR = motor(PORT2, ratio18_1, false);
TestDriveMotor(BR);

motor FL = motor(PORT3, ratio18_1, false);
TestDriveMotor(FL);

motor FR = motor(PORT4, ratio18_1, false);
TestDriveMotor(FR);

int main(){
    testMotorConfiguration();
}
```

Devices can also be manually added to the connection test list. This is useful for classes that make their own devices internally and do not use ones declared in the robot-config.h file. Just use the `AddDevice` constructor to add the device to the list.
```cpp
struct motorThing {
    motor* internalMotor = NULL;
    motorThing(int32_t port){
        internalMotor = new motor(port);
        AddDevice("motorThing motor", internalMotor);
    }
};
motorThing thing = motorThing(PORT2);
```

