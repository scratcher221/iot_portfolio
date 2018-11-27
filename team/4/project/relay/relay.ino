const int redPin = 14;
const int greenPin = 12;
const int bluePin = 13; 

const int relaisPin = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  
  //Relais setup
  pinMode(relaisPin, OUTPUT);

  //LED Setup
  pinMode(redPin, OUTPUT); // sets the redPin to be an output 
  pinMode(greenPin, OUTPUT); // sets the greenPin to be an output 
  pinMode(bluePin, OUTPUT); // sets the bluePin to be an output 

  //color(255,255,255); // turn the RGB LED red  
}

// the loop function runs over and over again forever
void loop() {
  Serial.print("Loop start");
  //turn relais and led on
  digitalWrite(relaisPin, HIGH);
  color(1023,1023,1023);
  delay(1000);

  //turn relais and led off
  digitalWrite(relaisPin, LOW);
  color(0,0,0);
  delay(1000);
}


void color (int red, int green, int blue)// the color generating function  
{    
  analogWrite(redPin, red);   
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue); 
}
