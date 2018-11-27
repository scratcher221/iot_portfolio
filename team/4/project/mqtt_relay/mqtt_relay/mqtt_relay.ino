#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// Update these with values suitable for your network.

const char* ssid = "iotraspi";
const char* password = "iotraspi";
const char* mqtt_server = "192.168.12.1";

const int redPin = 14;
const int greenPin = 12;
const int bluePin = 13; 

const int relaisPin = 5;

WiFiClient espClient;
PubSubClient client(espClient);

long lastMsg = 0;
char msg[50];
int value = 0;

char buf[5];

void setup() {
  Serial.begin(115200);

  randomSeed(micros());

  setup_wifi();

  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);

  //Relais setup
  pinMode(relaisPin, OUTPUT);

  //LED Setup
  pinMode(redPin, OUTPUT); // sets the redPin to be an output 
  pinMode(greenPin, OUTPUT); // sets the greenPin to be an output 
  pinMode(bluePin, OUTPUT); // sets the bluePin to be an output 

  //turn off relais and led by default
  digitalWrite(relaisPin, LOW);
  color(1023,1023,1023);
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }
  client.loop();
}

void setup_wifi() {
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();

  // Switch on the LED if an 1 was received as first character
  if(strcmp(topic, "/actor/relais")==0){
    if ((char)payload[0] == '1') {
      //turn on relais
      digitalWrite(relaisPin, HIGH);
    } else {
      digitalWrite(relaisPin, LOW);
    }
  }else if(strcmp(topic, "/actor/led")==0){
    if ((char)payload[0] == '1') {
      //turn on led
      color(0,0,0);
    } else {
      color(1023,1023,1023);
    }
  }

}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      //client.publish("outTopic", "hello world");
      // ... and resubscribe
      client.subscribe("/actor/relais");
      client.subscribe("/actor/led");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void color (int red, int green, int blue)// the color generating function  
{    
  analogWrite(redPin, red);   
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue); 
}
