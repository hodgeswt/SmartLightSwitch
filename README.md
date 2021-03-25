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
2. Establish an account on [Sinric.Pro](Sinric.Pro) and log in.
3. Go to Devices > Add Device. Enter the necessary name / device type and choose your preferences. 
4. When done, find the device and click "copy" next to its name. Past this number into the SWITCH_ID constant in the code.
5. On Sinric.Pro, go to Credentials. Copy and paste your App Key and App Secret into their respective constants in the code.
6. Download the code in this repo and upload it to your NodeMCU.
7. De-solder the NodeMCU headers.
8. Re-attach the headers on pins D5 and the adjacent GND so they stick out of the top. (Adjust code if pinout is different).
9. Mount the 3D printed mounting plate to the light switch.
10. Attach the NodeMCU with your tape.
11. Attach the servo with the screws onto the mounting plate. 
12. Attach the servo cables onto D5 & GND
13. Plug in the NodeMCU with your USB-B cable.
14. On first startup, the NodeMCU will create a local hotspot. Connect to it. Your device will load an HTML page allowing you to enter your WiFi information. In the future, the NodeMCU will automatically connect to this network.
15. Complete [Step 2 on this page](https://help.sinric.pro/pages/quickstart.html) to connect to your Amazon Alexa. Alternatively, Sinric.Pro connects to Google Home, Samsung SmartThings, and IFTTT. They provide tutorials on how to connect all services.

If you need to change WiFi networks, simply re-flash the code to the NodeMCU and repeat steps 10 ans 12-14.

N.B. - if your light switch doesn't have a nearby outlet, you can power the NodeMCU in another manner.
