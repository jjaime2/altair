<p align="center">
  <a href="" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/ijlPhWZ.jpg" alt="Bot logo"></a>
</p>

<h3 align="center">Altair</h3>

---

<p align="center"> Custom robotics platform for autonomous navigation
    <br> 
</p>

## Table of Contents
+ [About](#about)
+ [Demonstration](#demo)
+ [Goals](#goals)
+ [Documentation](#docs)
  + [Mechanical](#docs/mechanical)
  + [Electrical](#docs/electrical)
  + [Software](#docs/software)
+ [Acknowledgements](#acknowledgement)

## About <a name = "about"></a>
This repository will track the progress of designing Altair, a robotics platform for autonomous navigation. Trying to make each new feature meaningful and minimize future regret.

## Demonstration <a name = "demo"></a>
Updating Fall 2022 (hopefully)

## Goals <a name = "goals"></a>
:white_square_button: Chassis assembled

:white_square_button: Manual steering

:white_square_button: ??? (short-term TBD)

:white_square_button: Autonomous steering

:white_square_button: ??? (long-term TBD)

## Documentation <a name = "docs"></a>
### Mechanical <a name = "docs/mechanical"></a>
#### Chassis <a name = "docs/mechanical/chassis"></a>

<p align="center">
  <a href="" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/HzgSvFX.jpg" alt="Altair chassis"></a>
</p>

The chassis was designed to be a bit overkill for the forces my platform will likely encounter while still remaining at a reasonable weight. The initial design specifications expected to use only two drive motors and to handle only 10 lbs of weight while the chassis itself was expected to weigh just over 2 lbs; however, a more recent design choice involved the switch to four drive motors which should increase the available payload weight even further. It is assembled from 30x30 mm aluminum extrusions with 90&deg; aluminum angle brackets. The total length, width, and height are 300 mm, 260 mm, and 30 mm respectively. Peripherals are mounted with PLA-based 3D printed fixtures as discussed in the [Fixtures](#docs/mechanical/fixtures) section.

#### Fixtures <a name = "docs/mechanical/fixtures"></a>
Fixtures for various peripherals are designed and manufactured in-house with PLA-based 3D modelling and printing. Thus-far, these fixtures include:

1. Motor Mounts
2. Motor Mount Guides
3. Battery Mount

#### Baseplate <a name = "docs/mechanical/baseplate"></a>
The baseplate will be used to mount electronics to the chassis. It will be designed from two sheets of 5 mm thick acrylic sheets with mounting holes hand-drilled into the plates. I don't yet intend to add any features that would introduce a large load to the chassis directly, so the material should work fine for my purposes.

### Electrical <a name = "docs/electrical"></a>
#### Power Distribution <a name = "docs/electrical/power_distribution"></a>


#### Motors <a name = "docs/electrical/motors"></a>


### Software <a name = "docs/software"></a>
#### Motor Control <a name = "docs/software/motor_control"></a>
For motor control, I'm currently using a MDD10A - Dual Channel 10A DC Motor Driver and a NUCLEO-F401RE. The NUCLEO board generates PWM and DIR signals for the Motor Driver that then connect to their respective motors channels. Eventually, a Jetson Nano will be used either for image processing or to process LiDAR data and take the role of primary motor controller.

#### Sensors <a name = "docs/software/sensors"></a>
Each motor is equipped with a hall effect encoder for odometry.

## Acknowledgements <a name = "acknowledgement"></a>
+ TBD
