# upper-rez-monitor
Water level monitor for the upper reservoir at Deep Springs College, using capacitive sensing and radio chips.

## Overview ##

The monitor system will consist of three modules. The sensor and transmit module will be located at the upper rez, ~500m and up a hill from the main building. The receiver and web module will be located on the back of the main building, at a point with line of sight to the fence of the upper rez. The readout module will display this data, pulled live from the cloud, somewhere inside the main building.

## Sensor And Transmit

The sensor is a series of exposed which are hooked up to capacitive sensor pins on the Arduino, and are secured with weights at various heights along the wall of the rez. As the water level rises, it will activate sucessive sensors and report the water level to the Ardunio. The transmitter is an HC-12 radio chip with an attached SMA antenna. It will be running code to periodically transmit a packet of data containing the status of the sensor, power level, and level data.

## Receive and Upload

The receiver will be a paired HC-12 radio chip with attached SMA antenna transmitting to an Arduino MKR 1010WiFi. It will be running code to periodically take the sensor data from the serial buffer on the HC-12 and post it to a web server hosted by the readout chip.

## Readout and Hosting

The readout chip will be driving a display which provides a user-friendly readout of the level data. It will also be hosting a web server which will take HTTP posts from the receiver module and display the current water level. An SD card on this module will store the historical data.

