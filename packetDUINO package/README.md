# Adafruit Arduino Boards

Configuration and other support files to use Packetworx's boards like packetDUINO and more with the Arduino IDE.  This is provided as
a reference for modifying the Arduino IDE to support Packetworx's boards.  If you
just want to program one of Packetworx's boards you probably want one of the
preconfigured Arduino IDEs that Packetworx provides--see the learn system guide for
your board for more details!

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
