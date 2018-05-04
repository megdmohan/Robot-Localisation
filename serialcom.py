import time
import serial
ser = serial.Serial(
                  port='/dev/rfcomm0',
                  parity=serial.PARITY_NONE,
                  baudrate=9600,
                  timeout=60
                   )
while True:
with open ("A.txt","r") as myfile:
data=myfile.read(1)
ser.write(data)
print (data)
