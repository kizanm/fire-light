# fire-light
Microcontroller Temperature Control


A simple beginner-friendly microcontroller project that demonstrates how to control temperature using a basic heating control system.


Overview


This project is designed as an introductory example for learning microcontroller programming. It demonstrates how to:




Read temperature data from a sensor


Compare the current temperature with a target temperature


Control a heating device


Use simple conditional logic for automatic temperature control




The example uses an 8051-compatible microcontroller and C.


How It Works


The program continuously reads the current temperature and controls the heater according to predefined temperature limits:




Below 29°C → Turn the heater on


At or above 30°C → Turn the heater off


Between 29°C and 30°C → Keep the current heater state




This simple hysteresis mechanism helps prevent the heater from switching on and off too frequently.


Example Hardware


The program can be used with:




8051-compatible microcontroller


Temperature sensor such as DS18B20


Relay or transistor-based heater control circuit


Heating element




File


temperature_control.c



Learning Goals


This project is intended for beginners who are learning:




Embedded C


Microcontroller programming


GPIO control


Sensor reading


Basic control logic




The temperature sensor implementation can be replaced with the appropriate driver for your specific hardware.


License


This project is provided for educational purposes.

