# upper-rez-monitor
Water level monitor for the upper reservoir at Deep Springs College, using capacitive sensing and radio transmissions

## overview

The monitor system will consist of three modules. The sensor and transmit module will be located at the upper rez, ~500m and up a hill from the main building. The receiver and web module will be located on the back of the main building, at a point with line of sight to the fence of the upper rez. The readout module will display this data, pulled live from the cloud, somewhere inside the main building.

##Sensor and transmit

The sensor is a series of exposed which are hooked up to capacitive sensor pins on the Arduino, and are secured with weights at various heights along the wall of the rez. As the water level rises, it will activate sucessive sensors and report the water level to the Ardunio. The transmitter is an HC-12 radio chip with

