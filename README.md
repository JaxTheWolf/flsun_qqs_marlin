![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="https://github.com/Foxies-CSTL/Marlin_2.1.x/wiki/icons/000-ICON_BootLogo.jpg" />
<img align="left" width=200 src="https://github.com/Foxies-CSTL/Marlin_2.1.x/wiki/icons/FLSun-LogoColor3.png" />

Additional documentation can be found at the [Marlin Home Page](https://marlinfw.org/).
Please test this firmware and let us know if it misbehaves in any way. Volunteers are standing by!

# Last release of Marlin 2.1.x for Delta FLSun.
## QQS-Pro (motherboard HISPEED_V1, ROBIN_MINIv2)
## Q5 (motherboard NANO_V1.x)
## SR (motherboard MKS/BTT with other screen like BTT-TFT35v3/Mks-TS35v2/RepRap TFT).

**20220711** Release BugFix 2.1.1
- Marlin BugFix 2.1.1 (QQSP, Q5, SR)
- Fix issues from v2.1

**20220618** Release 2.1
- Last Marlin Release 2.1 (QQSP, Q5, SR)
- New Pack Firmwares (STM/GD) for BTT-TFT mode landscape/portrait ("QQSP"&"SR").
- TMC-UART => all firmwares on 32Steps
- New control Temp nozzle (MPC) insteat PID Nozzle
- .....

**20220202** BugFix 2.0.9.3+
- Last Marlin Release 2.0.9.3 (QQSP, Q5, SR)
- Pack Firmware for BTT-TFT mode landscape/portrait.

**20220112** 2.0.9.3
- fix issue TFT on QQSPro
- Last Marlin Release 2.0.9.3 (QQSP, Q5, SR)

**20220110** 2.0.9.3
- Last Marlin Release 2.0.9.3
- Easy to configure by "FLSUNQ_Config.h" file,
- Add options in FLSUNQ_Config (LGX/OMG/SDHX(steps) extruder, Frankensun/Custom effector, other Probes, thermistor, ...)
- Integration SR motherboards with other screens like BTT-TFT,...

**20211110** 2.0.9.2
- Last Marlin Release 2.0.9.2

**20210724** 2.0.9.1
- Last Marlin Release 2.0.9.1

**20210610** 2.0.8.2
- Last Marlin Release 2.0.8.2

**20210602** 2.0.8.1+
- Last Bugfix 2.0.8.2
- Some Tests for users'board.

**20210514** 2.0.8+
- New wizards for UBL and ZoffSet.
- New menu for Delta users.
- Add options in FLSUNQ_Config (BMG&BMGmini(steps), Flying Extruder, thermistor, ...)
- Easy to configure by "FLSUNQ_Config.h" file,
- Integration in the Marlin firmware of the HISPEED motherboard and configuration files for the QQS-Pro,
- Fixed Deploy/Stow ZProbe
- Fixed for users using E3Dv6 hotend
- Others TIPS(QQS_Config.h, Quick calibration, Menu management of NeoPixel leds, etc).


**20201010** Updated Marlin 2.0.7 for FLSun QQS-Pro.
  
  - [Update binairies (U8+S)]
  - [Enlarge range Z probe]
  - [Adjust Step/mm (417) for BMG LG] 

20201001 Updated Marlin 2.0.7 for FLSun QQ-S with A4988 and TMC220x mode _UART and _StandAlone.

20200830 Updated Marlin 2.0.6 for FLSun QQ-S with A4988 and TMC2208_StandAlone.

20200827 Updated Marlin 2.0.6 for FLSun QQ-S with A4988.

20200815 Updated Marlin 2.0.6 for FLSun QQ-S.

Thanks to [Anders Salhman](https://github.com/AndersSahlman) & [Martin Carlsson](https://github.com/orecus) for their work and inspiration.

## I am not responsible for any Damage done do your Printer by using this. Using anything else than stock firmware requieres quite some knowlege.

## This is my experimental Marlin firmware on Delta FLSun QQ-S 

## Building Marlin 2.0

To build Marlin 2.0 you'll need [Arduino IDE 1.8.8 or newer](https://www.arduino.cc/en/main/software) or [PlatformIO](http://docs.platformio.org/en/latest/ide.html#platformio-ide). Detailed build and install instructions are posted at:

  - [Installing Marlin (Arduino)](http://marlinfw.org/docs/basics/install_arduino.html)
  - [Installing Marlin (VSCode)](http://marlinfw.org/docs/basics/install_platformio_vscode.html).

### Supported Platforms

  Platform|MCU|Example Boards
  --------|---|-------
  [Arduino AVR](https://www.arduino.cc/)|ATmega|RAMPS, Melzi, RAMBo
  [Teensy++ 2.0](http://www.microchip.com/wwwproducts/en/AT90USB1286)|AT90USB1286|Printrboard
  [Arduino Due](https://www.arduino.cc/en/Guide/ArduinoDue)|SAM3X8E|RAMPS-FD, RADDS, RAMPS4DUE
  [LPC1768](http://www.nxp.com/products/microcontrollers-and-processors/arm-based-processors-and-mcus/lpc-cortex-m-mcus/lpc1700-cortex-m3/512kb-flash-64kb-sram-ethernet-usb-lqfp100-package:LPC1768FBD100)|ARM® Cortex-M3|MKS SBASE, Re-ARM, Selena Compact
  [LPC1769](https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/general-purpose-mcus/lpc1700-cortex-m3/512kb-flash-64kb-sram-ethernet-usb-lqfp100-package:LPC1769FBD100)|ARM® Cortex-M3|Smoothieboard, Azteeg X5 mini, TH3D EZBoard
  [STM32F103](https://www.st.com/en/microcontrollers-microprocessors/stm32f103.html)|ARM® Cortex-M3|Malyan M200, GTM32 Pro, MKS Robin, BTT SKR Mini
  [STM32F401](https://www.st.com/en/microcontrollers-microprocessors/stm32f401.html)|ARM® Cortex-M4|ARMED, Rumba32, SKR Pro, Lerdge, FYSETC S6
  [STM32F7x6](https://www.st.com/en/microcontrollers-microprocessors/stm32f7x6.html)|ARM® Cortex-M7|The Borg, RemRam V1
  [SAMD51P20A](https://www.adafruit.com/product/4064)|ARM® Cortex-M4|Adafruit Grand Central M4
  [Teensy 3.5](https://www.pjrc.com/store/teensy35.html)|ARM® Cortex-M4|
  [Teensy 3.6](https://www.pjrc.com/store/teensy36.html)|ARM® Cortex-M4|

## Submitting Changes

- Submit **Bug Fixes** as Pull Requests to the ([bugfix-2.0.x](https://github.com/MarlinFirmware/Marlin/tree/bugfix-2.0.x)) branch.
- Follow the [Coding Standards](http://marlinfw.org/docs/development/coding_standards.html) to gain points with the maintainers.
- Please submit your questions and concerns to the [Issue Queue](https://github.com/MarlinFirmware/Marlin/issues).

## Marlin Support

For best results getting help with configuration and troubleshooting, please use the following resources:

- [Marlin Documentation](http://marlinfw.org) - Official Marlin documentation
- [Marlin Discord](https://discord.gg/n5NJ59y) - Discuss issues with Marlin users and developers
- Facebook Group ["Marlin Firmware"](https://www.facebook.com/groups/1049718498464482/)
- RepRap.org [Marlin Forum](http://forums.reprap.org/list.php?415)
- [Tom's 3D Forums](https://forum.toms3d.org/)
- Facebook Group ["Marlin Firmware for 3D Printers"](https://www.facebook.com/groups/3Dtechtalk/)
- [Marlin Configuration](https://www.youtube.com/results?search_query=marlin+configuration) on YouTube

## Credits

The current Marlin dev team consists of:

 - Scott Lahteine [[@thinkyhead](https://github.com/thinkyhead)] - USA &nbsp; [Donate](http://www.thinkyhead.com/donate-to-marlin)
 - Roxanne Neufeld [[@Roxy-3D](https://github.com/Roxy-3D)] - USA
 - Chris Pepper [[@p3p](https://github.com/p3p)] - UK
 - Bob Kuhn [[@Bob-the-Kuhn](https://github.com/Bob-the-Kuhn)] - USA
 - Erik van der Zalm [[@ErikZalm](https://github.com/ErikZalm)] - Netherlands 
## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
