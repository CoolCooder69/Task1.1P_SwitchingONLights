# Lighting System for the Hallway and Porch

This project for Arduino implements a system that emulates the function of the porch and hallway lights for Linda when she gets home. The push button simulates Linda’s arrival into the house. Upon its press, both LEDs turn on.

The code is written in such a way that it sets the button as INPUT_PULLUP and both LEDs as OUTPUT. The code runs an endless loop that reads the button state and turns both LEDs ON. After 3 seconds, the porch LED turns OFF and after another 3 seconds, the hallway LED turns OFF. The button is attached to pin 5, the porch LED is attached to pin 3 and the hallway LED is attached to pin 7.
