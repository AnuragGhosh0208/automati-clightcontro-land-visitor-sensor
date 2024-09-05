# automatic-light-control-and-visitor-counter


Project Overview: The Automatic Light Control System is designed to enhance energy efficiency by automatically controlling the lights in a room based on occupancy. The system uses a Passive Infrared (PIR) sensor to detect the presence of people, turning the lights on when motion is detected and off when the no of persons in a room becomes zero or there is no human presence. This helps in reducing energy wastage, making it ideal for smart homes, offices, and public spaces.

Key Components:

Arduino Uno: The main microcontroller used to process sensor input and control the relay module for light switching.
PIR Sensor: Detects motion by sensing changes in infrared radiation caused by human presence.
Relay Module: Acts as a switch to control the light based on the signal received from the Arduino.
LED/Light Bulb: Represents the lighting system being controlled.

Functionality:

Motion Detection: The PIR sensor continuously monitors the room for any movement. When it detects a human presence, it sends a signal to the Arduino.
Light Activation: Upon receiving the signal from the PIR sensor, the Arduino activates the relay module, turning on the connected light.
Automatic Light Turn-off: If the no of visiotrs in the room becomes zero, (configurable through code), the Arduino deactivates the relay module, turning off the light.
Energy Saving: The system reduces energy consumption by ensuring that lights are only on when necessary and when there is presence of a human, providing significant savings in electricity.
Programming: The system is programmed using C++ in the Arduino IDE. The code handles the sensor input and implements a delay mechanism to turn off the lights when required.

Challenges Overcome:

False Triggering: Implemented debouncing and sensitivity adjustments for the PIR sensor to avoid false triggers caused by minor movements or environmental factors.
Power Management: Optimized the timing mechanism to balance responsiveness and energy savings.

Applications:

Smart homes and offices
Public spaces like corridors, washrooms, and parking areas
Industrial buildings











