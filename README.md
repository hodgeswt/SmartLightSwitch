# SmartLightSwitch
SinricPro Light Switch

# Materials Needed
- NodeMCU or equivalent Wi-Fi enabled Arudino-compatible microntroller.
- SG-90 or equivalent servomotor.
- [This 3D model from Thingiverse](https://www.thingiverse.com/thing:2848069).
- Double-sided tape / Command Strip
- USB-B cable and wall adapter.

# Instructions for Use
1. Set up your Arduino IDE for the NodeMCU by following the steps [here](https://create.arduino.cc/projecthub/electropeak/getting-started-w-nodemcu-esp8266-on-arduino-ide-28184f)
2. Download the code in this repo and upload it to your NodeMCU.
3. De-solder the NodeMCU headers.
4. Re-attach the headers on pins D5 and the adjacent GND so they stick out of the top. (Adjust code if pinout is different).
5. Mount the 3D printed mounting plate to the light switch.
6. Attach the NodeMCU with your tape.
7. Attach the servo with the screws onto the mounting plate. 
8. Attach the servo cables onto D5 & GND
9. Plug in the NodeMCU with your USB-B cable.

N.B. - if your light switch doesn't have a nearby outlet, you can power the NodeMCU in another manner.
