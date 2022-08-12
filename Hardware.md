# Hardware

Hello! Welcome to the hardware section of the packetDUINO. In this section, you'll see the specification, parts and function available in packetDUINO.

## Technical Specifications

![image](https://user-images.githubusercontent.com/110519487/182571007-6816546b-2648-4ed9-8e40-143b703bedbf.png)

## packetDUINO Parts

![image](https://user-images.githubusercontent.com/110519487/182995566-236e0629-f7e9-4b2c-a43e-486b60fc3751.png)

| Number | Name | Description
| --- | --- |  --- |
| 1 | AcSIP LoraWAN S76S Module | The AcSIP S76S System in Package (SIP) module is designed and manufactured in a small form factor and integrates the Ultra-low-power 32-bit ARM®-based Cortex®-M0L MCU (STM32L073x) and Semtech SX1276 radio module with LoRa™ modulation supporting global 868 MHz or 915 MHz ISM-Bands.
| 2 | Atmega32u4 Microcontroller | The low-power Microchip 8-bit AVR® RISC-based microcontroller featuring 32 KB self-programming Flash program memory, 2.5 KB SRAM, 1 KB EEPROM, USB 2.0 full-speed/low-speed device, 12-channel 10-bit A/D-converter, and JTAG interface for on-chip-debug. The device achieves up to 16 MIPS throughput at 16 MHz. 2.7-5.5 volt operation.
| 3 | Reset Button | Clicking or pushing this button resets the microcontroller.
| 4 | Female DC Barrel Jack | This is used to get supply from a Male DC Barrel Jack Connector. The supported voltage is from 3.3V - 17V input.
| 5 | MicroUSB Port | Standard MicroUSB port. This is used for uploading program to the packetDUINO. This can also be used to supply power to the device.
| 6 | 5V regulator | This regulates the supply of the board to allow use of voltage coming in from Female DC Barrel Jack (3.3V to 17V).
| 7 | 3.3V & 5V Pins | This can be used to power external sensor or components by using the packetDUINO's supply.
| 8 | Voltage IN (VIN) Pin | Allows input voltage of up to 6V. 
| 9 | Ground (GND) Pin | Ground Pins of the packetDUINO.
| 10 | Analog Pins (A0 to A5) | This is used for Analog Reading, same as the Arduino boards. Usage example: Photoresistors, Potentiometer and other Analog Inputs.
| 11 | Digital Pins (0 to 7) | This is used for Digital Input and Output functionality. The logic level is at 5V meaning, this accepts 5V as HIGH and outputs 5V at max.
| 12 | Digital pins (8 to 13) | This is used for Digital Input and Output functionality. The logic level is at 5V meaning, this accepts 5V as HIGH and outputs 5V at max.
| 13 | Connector Jacks | Sample desc
| 14 | U.FL IPEX Connector | Sample desc
| 15 | Proximity Sensor Slot | packetDUINO has a built-in proximity sensor slot.
| 16 | Special Clock & Serial Data Pins (SCL and SDA) | SCL and SDA are commonly used in I2C communication. This can be used in LCDs and other device that uses I2C.
| 17 | Analog Reference (AREF) Pin | Sample desc
| 18 | Reset Pin | This can be used to trigger the reset of the board by providing 5V to this pin.
