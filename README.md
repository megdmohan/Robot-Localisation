# Robot-Localisation
Localisation of Robot to send the position wirelessly  from a raspberry pi to Bluetooth extended MSP430  mounted on Sambots
#Connection between MSP430 and RN 42
#VCC-VCC, GND-GND, RX to P1.1, TX to P1.2
#On the raspberry pi 3 terminal:
sudo rfcomm connect 0 00:66:66:48:DD:27 & sambot 1 is connected on channel 0
sudo rfcomm connect 1 00:06:66:67:44:04 & sambot 2 is connected on channel 1
