# Arduino + BlueTooth + Android 

##Hardware Used:

+ [MegaADK Arduino Board (Atmega 2560)](http://arduino.cc/en/Main/ArduinoBoardADK)
+ [ITEAD Bluetooth Shield v2.1](http://iteadstudio.com/store/index.php?main_page=product_info&products_id=307) 
+ [Parallax Continuous Rotation Servo](http://www.parallax.com/Store/Microcontrollers/BASICStampModules/tabid/134/ProductID/102/List/1/Default.aspx?SortField=UnitCost,ProductName)
+ LED
+ Power Supply (5V required)
+ wires (4)

##Software Used:

+ [Arduino IDE](http://arduino.cc/hu/Main/Software)
+ [Bluetooth Viewer](https://play.google.com/store/apps/details?id=net.bluetoothviewer&hl=en)


##Circuit Description

Click [here](https://github.com/smargonz/arduino-bluetooth/blob/master/ArduinoBTCircuit.png?raw=true) for photo.

Mount the BT shield on the MegaADK, closest to the power/usb/serial connections. Connect an LED (longer side) to digital pin 3 and wire the short side to ground. Connect pin 4 to the control wire of the servo (a white wire, in our case.) The servo's red and black wires are connected to 5V and ground, respectively. 

*Do NOT let the black and red wires touch once connected to power and ground. You will cause a short and/or fry something.*

##Other Notes:

+ Make sure the BT switch is flipped to the "To Board" side. We used the 3.3V setting, though it might not be relevant. 

+ The most important pins for communication are Tx/Rx, which will have to be disconnected from the shield when programming the Arduino. (Either remove the shield each time or wire manually, using a switch.) 

+ Make sure ONLY the external power supply is connected. (Otherwise, it defaults to using BT as a last resort.) 

+ Default baud rate is 9600

+ Default pairing password is 1234

+ You may have to run the [bluetooth initialization sketch](http://arduino.cc/it/Main/ArduinoBTInitializationSketch).

##In Action

Using the available materials, we rigged our setup to flip the light switch. You can see a demo [here](http://youtu.be/mLJeMa952po).

###Use Case:  
+ Power on Arduino
+ Pair Android and ITEAD shield
+ Open Bluetooth Viewer on Android
+ Connect Android and shield by selecting 'itead' in BT Viewer 
+ Send L or D character from Android, flipping the lights (light/dark)

##Resources:

+ [ITEAD BT shield DataSheet](http://www.micro4you.com/files/itead/BluetoothShieldV2.1.pdf)

+ [BT0417C DataSheet](http://mdfly.com/Download/Wireless/BT0417C_datasheet.pdf)

+ [Servo Reference (see example)](http://arduino.cc/en/Reference/Servo)