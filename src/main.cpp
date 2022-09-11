#include <Arduino.h>
#include <Utility.h>

void setup()
{
  Serial.begin(921600);
  TelnetStream.begin();
  delay(10);
  loadConfigFile();
  setupOTA();
  pinMode(0, OUTPUT);
  server.on("/", handle_OnConnect);
  server.on("/ledon", handle_ledon);
  server.on("/ledoff", handle_ledoff);
  server.onNotFound(handle_NotFound);
  server.begin();
}

void loop()
{
  ArduinoOTA.handle();
  if (wm.run() != WL_CONNECTED)
  {
    serialAndTelnetPrintln("WiFi not connected!");
    delay(5000);
  }
  if (wm.run() == WL_CONNECTED)
  {
    serialAndTelnetPrintln("");
    serialAndTelnetPrint("Connected to ");
    serialAndTelnetPrintln(WiFi.SSID());
    serialAndTelnetPrint("Device Name ");
    serialAndTelnetPrintln(espName);
    serialAndTelnetPrint("IP Address ");
    serialAndTelnetPrintln(WiFi.localIP());
    delay(5000);
  }
  server.handleClient();
  if (pinStatus)
  {
    digitalWrite(0, HIGH);
  }
  else
  {
    digitalWrite(0, LOW);
  }
}