## Introduction
Solar power comes out as a renewable and environmentally beneficial alternative as the globe welcomes the move to sustainable energy sources. An Automatic Solar Tracker System is a game changer for increasing the efficiency of solar panels. This project digs into the development of an Arduino-based solar tracker system that detects sunlight using Light Dependent Resistors (LDR) and changes the position of the solar panel using a servo motor. As a consequence, a clever and dynamic system is created that constantly aligns the solar panel orthogonal to the sun’s beams, improving energy gathering. Join MArobotics on this adventure as we investigate how to build a solar tracker system.

## Components Required
-5mm Acrylic Sheet (30cm x 20cm)
-VPC Cardboard (5mm thickness)
-Arduino UNO
-LDR Sensors (x2) – Light Dependent Resistors
-Mini Servo Motor (SG90)
-USB DC 1~5V to DC 5V Voltage Step-Up Boost Module
-LiPo Battery Charger Module (Mini TP4056 IC)
-On/Off Switch
-18650 Battery Holder (1 Cell)
-18650 Battery Cell (3.7V)
## Working
Compiling the code in the Arduino IDE is the first step. This code allows the servo motor and the LDR sensors to operate together by coordinating their actions. At first, the servo motor is angled ninety degrees, and it remains motionless until the light reaching both LDR sensors is equal.
When a difference in light reception is found between the two LDR sensors, the Project shows the intelligence of the system. The servo motor moves quickly to the side with higher light exposure as soon as one sensor detects a greater amount of light than the other. The servo motor stops when both sensors detect the same quantity of light, which is the result of this dynamic adjustment.

The efficiency with which the system follows the sun’s location as it rises, sets, or moves across the sky demonstrates its possibilities. The servo motor precisely moves the solar panel to keep it aligned with the sun by moving a light source nearer to one of the LDR sensors. When the two LDR sensors detect the same quantity of light, the system makes sure that the panel stays exactly perpendicular to the sun’s beams, which maximizes the efficiency of energy collecting.


## Circuit Diagram
The circuit diagram that is included gives us an understanding of the hardware arrangement that serves as the foundation for our Automatic Solar Tracker System. A 3-watt, 5-volt solar panel serves as the main energy source for the system. We include a LiPo Battery Charger Module Mini TP4056 IC, which is powered by a 3.7-volt cell and has an on/off switch for control, to ensure the effective management of this energy.

A DC-DC 3.7-volt to 5-volt converter is used to provide 5 volts to power the essential parts, which include an MG90 servo motor, two Light Dependent Resistor (LDR) sensors, and an Arduino UNO, in order to maintain a consistent power distribution. Light Depending Resistors, or LDR sensors, are essential because they can identify variations in light intensity caused by changes in sunshine. The LDR sensors are pulled down using 100-kilo ohm resistors to guarantee their operation.