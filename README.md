# Multi_Car_Parking
Multi Car and High Density Parking Coodination

## Update log
### 04/01/2019
1. Fixed the bug in cost writting function when writing the parking trajectory to cost map.
2. The cost map is now a 2-tuple (cost, car_num) which marks the cost and the producer of it at the same time. Cars will not identify the cost produced by itself as collision.


### 03/31/2019
1. Set up roslaunch and parameter service. Now H-OBCA, plot and control can be started by a single roslaunch.
2. Edited the cost map update: In the loop of every car, the map is firstly reset, then loop around every other car to collect the location and maenuver data
3. Edited the collision detection: If the car is going straight, check the cost in front of the path; if the car is in the middle of the parking maneuver, check the collision in the rest of the path.
4. The algorithm works when there is only 5 cars. When added the number of cars to 12, a dead lock happens between cars. Therefore, **the time information should be considered in the collision avoidance, or the cost map should include producer of the corresponding cost**.

### 03/30/2019
1. H-OBCA can now save and load from file
2. The cost map can now be visualized
3. Fixed some bug about multiple cars. Abd added a lot functions for multiple cars. Now the simulation can be carried out for multiple cars.
4. The problem still exist: 1) The maneuver need to be specified from the begininng; 2) The collision avoidance is not always reliable 

### 03/26/2019
1. Added the "Go straight" function and the maneuver client, now single car can go along straight lane and park according to the specificed slot
2. Added the cost map class, and define a naive cost map for the second car to identify the obstacle
3. Added the second car to show up after some delay and avoid the first car by looking up the cost map
4. There are a lot of bugs when two car is acting, need to fix next time. The current version is just a hard-coded demo (The plot function is also ugly changed to make a temperary 2-car demo)

### 03/25/2019
1. Built the plotting node which can subscribe to the car state and input topic and plot the car box and trajectory
2. Small adjustion to the slot width parameters

### 03/09/2019
1. Set up the ROS Package file structure, msg and srv
2. Package `parking` is the main package for the future design of parking algorithm. The msg, srv are written here.
3. A service is designed to let package `parking` get the desired parking maneuver from H-OBCA. The testing client node is successfully implemented.
4. Reorganized the H-OBCA code structure and make `main.jl` as a function. Fixed some bugs in the code.
5. `run_HOBCA` is finished to iterate all possible parameters and generate the maneuver dictionary. 
6. Made the H-OBCA as a ros package and define a server node to provide parking module with requested maneuver.

### 03/04/2019
Reorganized the files and archived MATLAB code into a seperate folder

## Reference
1. Zhang, Xiaojing, Alexander Liniger, and Francesco Borrelli. "Optimization-based collision avoidance." arXiv preprint arXiv:1711.03449 (2017). (Github repo: <https://github.com/XiaojingGeorgeZhang/H-OBCA>)