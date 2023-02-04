---
    parent: ConnectionTest
    layout: default
    grand_parent: Docs
    title: testDriveConfiguration()
---
# void testDriveConfiguration()
Tests all the drive motors if they are spinning in the correct direction.

## Usage
This function is called at the start of main. It will spin all the drive motors forward for 1 second, print their name, then stop for 1 second. This allows you to easily see any motors that are spinning the wrong direction. 
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
    testDriveConfiguration();
}
```