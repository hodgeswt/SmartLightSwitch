/*
 * 
 * Code for my Bedroom Light Switch
 * 
 */
#include <WiFiManager.h>

#include <SinricPro.h>
#include <SinricProSwitch.h>

#include "Servo.h"

// SinricPro info -- ENTER YOURS HERE
#define APP_KEY ""
#define APP_SECRET ""
#define SWITCH_ID ""

Servo servo;

void lightOn() {
  servo.write(45);
  servo.write(0);
}

void lightOff() {
  servo.write(75);
}

bool onPowerState(const String &deviceId, bool &state) {
  if (state == true) {
    lightOn();
    Serial.println("Turned light on");
    return true;
  } else if (state == false) {
    lightOff();
    Serial.println("Turned light off");
    return true;
  } else {
    return false;
  }
  return false;
}

void configModeCallback (WiFiManager *myWiFiManager) {
  WiFi.softAPIP();
  myWiFiManager->getConfigPortalSSID();
}

void setup() {
  Serial.begin(9600);
  servo.attach(2);
  
  // AutoConnect to WiFi or establish an AP to setup credentials
  WiFi.mode(WIFI_STA);
  WiFiManager wm;
  wm.setAPCallback(configModeCallback);
  if (!wm.autoConnect()) {
    ESP.restart();
    delay(1000);
  }

  // SinricPro
  SinricProSwitch& mySwitch = SinricPro[SWITCH_ID];
  mySwitch.onPowerState(onPowerState);
  SinricPro.begin(APP_KEY, APP_SECRET);
}

void loop() {
  SinricPro.handle();
}
