/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

int blue = 10;           // the pin that the LED is attached to
int green = 11;
int red=12;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  
{ 
  analogWrite(10, random()%255);    

  delay(500);

}

