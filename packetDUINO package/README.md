# packetDUINO Board Support Package

The packetDuino Board Support Package (BSP) is a software package designed to enable the use of packetDUINO, a board based on the Adafruit Feather 32u4. The packetDUINO BSP provides additional functionality specific to the packetDUINO product, including support for the built-in radio module and examples and libraries for common packetDUINO applications, such as wireless communication and sensor readings.

The packetDUINO BSP is easy to install and use. Simply download the latest version of the BSP from the GitHub repository, extract the contents to your Arduino sketchbook directory, and select "packetDUINO" from the board menu in the Arduino IDE. Then, you can use the included examples and libraries as a starting point for your application.

The packetDUINO BSP is open source software released under the MIT license, and we welcome contributions from the community. If you have any questions, bug reports, or feedback, please don't hesitate to contact us at info@packetworx.com.

Whether you're a hobbyist, student, or professional developer, the PacketDuino BSP makes it easy to get started with PacketDuino and build exciting new projects!

NOTE: If you want to setup the Arduino IDE to work with these boards you probably
want to follow this guide that shows an easy method using the board manager:
https://github.com/Packetworx-IoT/packetDUINO This repository is
only for manually configuring Arduino to work with Packetworx's AVR boards (and for
building new packages for the board manager).

These files are only compatible with the 1.6.x series of Arduino IDE and NOT the
earlier 1.0.x series.  The contents of this repository should be cloned/copied
into an Arduino/hardware/packetworx/avr folder.

NOTE: Arduino IDE version 1.6.2 has a bug with supporting external cores and
DOES NOT work with these files.  Use Arduino 1.6.3+, or an earlier version like
1.6.1.
