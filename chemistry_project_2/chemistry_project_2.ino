#include<dht.h>

#define dht_pin A0
#define mq_pin A1
dht DHT;

void setup() {
  // put your setup code here, to run once:
  pinMode(dht_pin,INPUT);
  pinMode(mq_pin,INPUT);
  Serial.begin(9600);
  Serial.println("TEMPERATURE HUMIDITY AND TOXIC GAS SENSOR");

}

void loop() {
  // put your main code here, to run repeatedly:
  DHT.read11(dht_pin);
  Serial.println("========================================");
  Serial.println("TEMPERATURE(C): ");Serial.println((DHT.temperature)-13);
  Serial.println("HUMIDITY(%): ");Serial.println((float)(DHT.humidity-35));
  Serial.println("TOXIC LEVEL(Scale 1 to 1000) : ");Serial.println(analogRead(mq_pin));
  Serial.println("========================================");
  Serial.println();
  delay(2000);
  
  

}
