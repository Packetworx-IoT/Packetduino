/**

Onboarding Sample Sketch of Packetduino

Made by Packetworx Inc.

Maintained by Rommel Jay Gadil
February 3, 2023

**/

String devAddr = " ";
String nwkSKey = " ";
String appSKey = " ";


String Buffer;
bool set_baud_acsip = true;

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial1.begin(115200);
  delay(5000);
  run_once_acsip();
}

void loop() 
{ 
  char cmd[100];
  sprintf(cmd,"mac tx ucnf 15 BABE");
  Serial1.print(cmd);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  Serial.println(cmd);
  delay(3000);
}

void run_once_acsip()
{
  String set_devaddr = "mac set_devaddr ";
  String set_nwkskey = "mac set_nwkskey ";
  String set_appskey = "mac set_appskey ";
  String mac_join = "mac join abp";
  
  Serial1.write("sip reset");
  Serial.write("sip reset");
  delay(5000);
  Buffer = set_devaddr;
  Buffer += devAddr;
  Serial.println(Buffer);
  Serial1.print(Buffer);
  delay(5000);
  Buffer = set_nwkskey;
  Buffer += nwkSKey;
  Serial.println(Buffer);
  Serial1.print(Buffer);
  delay(5000);
  Buffer = set_appskey;
  Buffer += appSKey;
  Serial.println(Buffer);
  Serial1.print(Buffer);
  delay(5000);
  Serial1.print(mac_join);
  delay(3000);
  Serial.print("done");
}
