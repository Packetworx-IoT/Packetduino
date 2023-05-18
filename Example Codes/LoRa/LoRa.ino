  /**

Onboarding Sample Sketch of Packetduino

Made by Packetworx Inc.

Created by Engr. John Francis Guinto, Senior Firmware Engineer

Maintained by Rommel Jay Gadil
February 3, 2023

**/

String appeui = "0000000000000000";
String deveui = "70B3D57ED80011E6";
String appkey = "50514EA9ABDA6E7410ED088BA478DBA1";


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
  String set_deveui = "mac set_deveui ";
  String set_appeui = "mac set_appeui ";
  String set_appskey = "mac set_appkey ";
  String mac_join = "mac join otaa";
  
  Serial.println("sip reset");
  Serial1.print("sip reset");
  delay(1000);
  Buffer = set_deveui;
  Buffer += deveui;
  Serial.println(Buffer);
  Serial1.print(Buffer);
  delay(500);
  Buffer = set_appeui;
  Buffer += appeui;
  Serial.println(Buffer);
  Serial1.print(Buffer);
  delay(500);
  Buffer = set_appskey;
  Buffer += appkey;
  Serial.println(Buffer);
  Serial1.print(Buffer);
  delay(500);
  Serial.print("Joining...");
  Serial1.print(mac_join);
  delay(1000);
  Serial.print("Sending initial packet");
  Serial1.print("mac tx ucnf 2 deadbeef");      // This is implemented to test connectivity.
  delay(3000);     
  Serial.print("done");
}