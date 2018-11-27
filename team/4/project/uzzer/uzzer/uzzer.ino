/* Arduino tutorial - Passive Buzzer Module 
   More info and circuit: http://www.ardumotive.com
   Dev: Giannis Vasilakis // Date: 12/11/2017  */
   
int buzzer = 16 ; //d0
void setup ()
{
  pinMode (buzzer, OUTPUT) ;
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(D3, INPUT_PULLUP);
}
void loop ()
{
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(D3);

  if (sensorVal == LOW) {
    //ausgeschaltet
    digitalWrite (buzzer, LOW) ; //no tone
  }else{
    digitalWrite (buzzer, HIGH) ; //send tone
  }
}
