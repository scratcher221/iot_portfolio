#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

#include <LiquidCrystal_I2C.h>

#define WIFI_SSID "iotraspi"
#define  WIFI_PASSWORD "iotraspi"

#define IFTTT_API_KEY "fgKzSFObOCzi1bao4tfgkfjGBKLYhpupiIHlMzx78pV"
#define IFTTT_EVENT_NAME "button_press"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(D3, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  //setup lcd
  // The begin call takes the width and height. This
  // Should match the number provided to the constructor.
  lcd.begin(16,2);
  lcd.init();

  // Turn on the backlight.
  lcd.backlight();

  // Move the cursor characters to the right and
  // zero characters down (line 1).
  lcd.setCursor(5, 0);

  // Print HELLO to the screen, starting at 5,0.
  lcd.print("HELLO");

  // Move the cursor to the next line and print
  // WORLD.
  lcd.setCursor(5, 1);      
  lcd.print("WORLD");
}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(D3);
  //print out the value of the pushbutton
  //Serial.println(sensorVal);

  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);

    Serial.println("LED ausgeschaltet");
  } else {
    digitalWrite(LED_BUILTIN, HIGH);

    Serial.println("*** LED Eingeschaltet");

    HTTPClient http;  //Declare an object of class HTTPClient
 
    http.begin("http://maker.ifttt.com/trigger/buttonIOT/with/key/fgKzSFObOCzi1bao4tfgkfjGBKLYhpupiIHlMzx78pV");  //Specify request destination
    int httpCode = http.GET();                                                                  //Send the request
    Serial.println(httpCode);
    Serial.println("Code wird gesendet...");
    
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();      //Get the request response payload
      Serial.println(payload);                //Sollte "OK" zurückgeben
      Serial.println(""); 
 
    }
 
    http.end(); 

    delay(1000);
    
    //HttpClient client;
    //client.get("http://maker.ifttt.com/trigger/button_press/with/key/fgKzSFObOCzi1bao4tfgkfjGBKLYhpupiIHlMzx78pV");
  }
}
