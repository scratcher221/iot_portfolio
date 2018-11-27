#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// Update these with values suitable for your network.

const char* ssid = "iotraspi";
const char* password = "iotraspi";
const char* mqtt_server = "192.168.12.1";

int buzzer = 16 ; //d0

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

  //setup buzzer
  pinMode (buzzer, OUTPUT) ;
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(D3, INPUT_PULLUP);

  digitalWrite (buzzer, HIGH) ; //no tone
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }

  //read the pushbutton value into a variable
  int sensorVal = digitalRead(D3);

  if (sensorVal == LOW) {
    //ausgeschaltet
    //digitalWrite (buzzer, LOW) ; //no tone
    client.publish("/sensor/button", "1");

    delay(1000);
  }else{
    //digitalWrite (buzzer, HIGH) ; //send tone
    
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
  if(strcmp(topic, "/actor/buzzer")==0){
    if ((char)payload[0] == '1') {
      //turn on buzzer
      digitalWrite(buzzer, LOW);
    } else {
      digitalWrite(buzzer, HIGH);
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
      client.subscribe("/actor/buzzer");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}
