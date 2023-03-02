---
title: Home
layout: home
---
# Lib46f

Welcome to the 46f docs. Please go to the docs section to read about the library

## Why this library exists
This library has been the culmination of my four years of programming for vex robotics. It is designed to make writing auton routes as fast as possible as well as assist in using the robot. I think this library can be best explained by sharing my story with programming in vex. 

### 2019-2020 (Tower Takeover)
In this entire year, I made two half-working autons. This is primarily due to a lack of time with the robot to program. I had very little actual programming time that entire year. My method of controlling the wheelbase was vex's built-in rotateTo functinos. These functions are bad for a few reasons:
1. You can only drive the robot in straight lines, no curves are allowed. 
2. If the robot hits the wall, the wheels will never stop trying to move and the auton will be stuck. 
3. It takes forever to get each command correct. 
4. There is almost no customization
5. Editing one individual command messed up everything afterwards

### 2020-2021 (Change Up)
During this year, I had two different methods of programming: Driver recordings, and Odometry (kinda). The first, Driver Recordings is where the driver drives the robot, every single command that he inputs to the controller is printed to a file, and then the file is compiled and ran for auton. Each run recorded with this was *almost* correct, however none of them were ever *exactly* correct. Normally, this wouldn't be a problem, except that the files were nearly impossible to edit because one had no idea what was happening in each line. To be clear, for every line, it was obvious what it did (like spin thie motor at 50%), but its contribution to the whole was opaque at best and indeterminable at worst. There are also many other problems that I shall sum up below:
1. As mentioned, all the autons aren't quite correct, and they are nearly impossible to edit
2. It takes a very long time for C++ to flush the stdout buffer, thus there were many buffer overflows leading to portions of the driver route not being printed. This left out large portions of code and contributed to the overall inaccuracy. 
4. Once again, editing one individual command messed up everything afterwards
5. Adding another auton portion required completely redoing the entire auton

The second thing I did in change up was a proto-odometry system. At the first competition I went to in change up, I saw someone (I do not remember the team) with tracking wheels on their robot and I asked them what they for, they replied that they used them to know the position of their robot. So, without doing any research, I made an odometry system. However it was more innaccurate than most odometry systems because (A) rather than approximating each robot movement as an arc, as other odometry systems do, I approximated each step as a straight line and (B) because my tracking wheels, to say the least, were not well built or well mounted. So, after writing my odometry system, I wrote two functions to use it: a drive to point function and a turn to function. It was also about this time that I discovered PID, so I wrote my drive functions with a soso implementation of PID. The turn function worked well, but where I was really messed up was my drive to point function exit conditions, which to say the least, were poor. What these functions did was say that, if the robot started with its x position on this side of the target, it would not exit until it was on the other side, and the same thing in the y direction. What I eventually realized later was that if the robot was driving along the x or y axis, it might not exit because it might never cross the axis. So I updated it to be distance to target, however since distance to target is always positive, the robot might overshoot, at which point it will be a long time (if ever) before it returns. So, at the end of the year, I made a PID drive distance function which worked fairly well for the mid-atlantic showcase signature event, however, the autons for some reason had to be tested constantly and updated after every match. 

The problems for the drive to point system was:
1. Tracking wheel was awful
2. Bad exiting conditions that made sure the robot sometimes never made it to the target
3. Lack of customizability
4. Hard to edit autons because of inconsistent tracking wheel

The problems for the PID drive distance function was:
1. Tracking wheel was still bad
2. Needed constant updating and editing to make sure it worked
3. Still, lack of customizability
4. Hard to edit autons because it was just a PID drive distance function, not a drive to point function

### 2021-2022 (Tipping Point)
Around the start of Tipping Point, I learned about pure pursuit, so I tried to write an implementation for it. It did not work mostly because I never fully read and understood the pure pursuit paper, I just looked at it, and what I currently had and said "ehh, this is close enough, mine will work." However, it did not work and I kept trying to fix it, and ignored my actual job of making working autons because I thought it was just "a few days away." At this time, vex also released the GPS sensor, which I decided to add to my program, but the GPS did not help. My tracking wheels were still awful, and I had abandoned PID drive distance functions in favor of pure pursuit, which I thought would be the cure to all my programming ills. So, I kept trying to fix, and even made a website to try and help me fix my program, this website is still live at [https://cwood-sdf.github.io/PurePursuitDebug/](https://cwood-sdf.github.io/PurePursuitDebug/). This website contained a bunch of graphs to try to help me fix pure pursuit, and it did help, but the real problem was something else: the GPS sensor and what amounted to an excuse of a tracking wheel. What I thought was that the GPS sensor was perfect, so I only had a tracking wheel for when the GPS sensor could not see its position. This all led me to having a very bad programming skills that did not even work at states because the pneumatics were not fully pumped up, leading to my programming skills officially getting a 0 at states, it would have done better if the pneumatics were working, but not hugely better. 

The primary problems with this programming system are summed up below:
1. The GPS sensor is awful (I shall go more in depth on this later)
2. The tracking wheel was awful
3. Pure pursuit should not do every drive command (particularly those of very short distance)
4. No customizability

### 2022-2023 (Spin Up)
At the end of Tipping Point, I made a website for programming my autons. It worked fairly well, so I updated the field map for it. This website can be found at [https://cwood-sdf.github.io/Auton46F/](https://cwood-sdf.github.io/Auton46F/). This website is just a few buttons that map to printing commands, and then a system with moveable buttons to make paths, turns, drive distance functions, and anything else in lib46f. This website saves a huge amount of time when programming, but it is never quite correct, so I need to edit everything it gives me. 

During the summer after tipping point I completely refactored the entire wheelbase controller system for much improved customizability. I still use this system today. I also made a robot simulator to test out this new refactoring. The robot simulator didn't do any actual acceleration physics, it just moved the wheels at the given speeds regardless of whether it was physically possible. It worked well and I found a few errors in my code, so, given that I made this project in a week, I would consider it a success. Then, later in the year, I realized that the GPS sensor had an error of +/- 6 inches. This margin of error is huge, so I completely removed GPS sensor support from my program. I also added PID drive distance functions for small movements. This all leads to the current version of lib46f: a highly customizable wheelbase controller and a ton of other really helpful utilities. 