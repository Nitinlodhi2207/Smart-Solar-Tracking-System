#include <Servo.h> //includes the servo library
Servo myservo;
#define ldr1 A0 // set ldr 1 Analog input pin of East ldr as an integer
#define ldr2 A1 // set ldr 2 Analog input pin of West ldr as an integer
int pos = 90; // initial position of the Horizontal movement controlling servo motor
int tolerance = 20; // allowable tolerance setting - so solar servo motor isn't constantly in motion
   
void setup(){
myservo.attach(2); // attaches the servo on digital pin 2 to the horizontal movement servo motor 
pinMode(ldr1, INPUT); //set East ldr pin as an input
pinMode(ldr2, INPUT); //set West ldr pin as an input
myservo.write(pos); // write the starting position of the horizontal movement servo motor 
    
delay(1000); // 1 second delay to allow the solar panel to move to its staring position before comencing solar tracking
}
void loop(){      
int val1 = analogRead(ldr1); // read the value of ldr 1
int val2 = analogRead(ldr2); // read the value of ldr 2
      
if((abs(val1 - val2) <= tolerance) || (abs(val2 - val1) <= tolerance)) {
//no servo motor horizontal movement will take place if the ldr value is within the allowable tolerance
}else {
if(val1 > val2) // if ldr1 senses more light than ldr2 
{
pos = pos+1; // decrement the 90 degree poistion of the horizontal servo motor - this will move the panel position Eastward
}
if(val1 < val2) // if ldr2 senses more light than ldr1
{
pos = pos-1; // increment the 90 degree position of the horizontal motor - this will move the panel position Westward
 }
}
     
if(pos > 180) {pos = 180;} // reset the horizontal postion of the motor to 180 if it tries to move past this point
if(pos < 0) {pos = 0;} // reset the horizontal position of the motor to 0 if it tries to move past this point
myservo.write(pos); // write the starting position to the horizontal motor
delay(50);
}
/* Explanation:

The servo motor is initialized as “myservo,” two pins, A0 and A1, are set up for the LDR sensors, and the code starts by importing the servo motor library. It also creates a variable called “position,” which is initialized to 90 degrees and represents the servo motor’s starting position. Introduced and set to 20, the “tolerance” variable is essential in deciding when to operate the servo motor in response to inputs from the LDR sensor. The servo motor will modify its position if there is a deviation bigger than this tolerance between the absolute values obtained from the two LDR sensors.
Within the setup function, pin 2 is initialized for “myservo,” and the LDR sensor pins are configured to INPUT mode. The servo motor’s starting position is set at 90 degrees in its original configuration. There is a 1000 ms wait before the code runs in the loop. The code reads the two LDR sensors’ analog readings during the loop and stores them in “var1” and “var2.” The servo motor’s readiness to move is then decided by a sequence of conditional statements that are carried out in response to variations in the tolerance value and the LDR sensor readings. The servo motor modifies position if the discrepancy exceeds tolerance.
Several possibilities are taken into consideration in the code, such as whether LDR sensor 1 or LDR sensor 2 receives more light. It modifies the “position” variable little by little, making sure it stays between 0 and 180 degrees. The “position” variable is used to update the position of the servo motor, and the loop is kept running with a 100 ms delay. The algorithm continually modifies the orientation of the solar panel to keep it in the best possible alignment with the sun’s position as determined by the LDR sensors. You may adjust the delay to change how quickly the solar panel moves.
*/