# Arduino
Speech Encryptor

The project basically encrypts the speech into morse code and ROT-13 using Arduino Components.

Please go through the Speech.docx for the code and connections with arduino.

.ino file is also provided to directly open in Arduino

# Components used :-

-> Arduino Uno

-> LCD 16x2

-> HC-05 Bluetooth Module 

# Software used :-

-> CoolTerm win

-> Arduino voice recognition

# Configuration :-

-> After making the connections with lcd, connect your arduino device with your system.

# Note:-
(While making connection make sure the bluetooth txd and rxd is not connected before uploading the code. After uploading the code in the arduino, connect rxd and txd respectively. There will be an error while uploading the codeif txd and rxd is connected)

--------------------------------------------------------------------------------------------------------------------------
-> Download an android app for speech recognition

   Search - Arduino voice recognition on googleplay
   
   Link - https://play.google.com/store/apps/details?id=appinventor.ai_cempehlivan92.Arduino_Sesli_Kontrol&hl=en
   
-> Connect your mobile device with the bluetooth module with the name HC-05 and password will be either 0000 or 1234.
--------------------------------------------------------------------------------------------------------------------------
-> Now open CoolTermWin software

First we need to select a port :- 

-> Click on Connection

   -> Then Options
   
   -> Then Click on Re-scan Serial Ports to scan for the port in which arduino is connected.
   
   -> Then Click on OK.
   
   Now port has been selected
 
 -> Click on Connect
 To capture all records in a file :-
 
 -> Click on Connection
 
 -> Capture to text file
 
 -> Start
 
 -> Select the location for the file
 
# Note:-
(Make sure the serial monitor is not open in Arduino, because it will cause a conflict between CoolTermWin and serial Monitor)

For further details on CoolTermWin please visit the following link.
http://freeware.the-meiers.org/
------------------------------------------------------------------------------------------------------------------------------

All the credit for the app and software goes to their respective owner.


And that's all folks.

   
