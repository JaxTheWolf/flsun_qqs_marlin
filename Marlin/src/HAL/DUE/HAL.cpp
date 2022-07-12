/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 * Copyright (c) 2016 Bob Cousins bobcousins42@googlemail.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/**
 * HAL for Arduino Due and compatible (SAM3X8E)
 */

#ifdef ARDUINO_ARCH_SAM

#include "../../inc/MarlinConfig.h"
#include "HAL.h"

#include <Wire.h>
#include "usb/usb_task.h"

// ------------------------
// Public Variables
// ------------------------

uint16_t MarlinHAL::adc_result;

// ------------------------
// Public functions
// ------------------------

#if ENABLED(POSTMORTEM_DEBUGGING)
  extern void install_min_serial();
#endif

void MarlinHAL::init() {
  #if ENABLED(SDSUPPORT)
    OUT_WRITE(SDSS, HIGH);  // Try to set SDSS inactive before any other SPI users start up
  #endif
  usb_task_init();          // Initialize the USB stack
  TERN_(POSTMORTEM_DEBUGGING, install_min_serial()); // Install the min serial handler
}

void MarlinHAL::init_board() {
  #ifdef BOARD_INIT
    BOARD_INIT();
  #endif
}

void MarlinHAL::idletask() { usb_task_idle(); } // Perform USB stack housekeeping

uint8_t MarlinHAL::get_reset_source() {
  switch ((RSTC->RSTC_SR >> 8) & 0x07) {
    case 0: return RST_POWER_ON;
    case 1: return RST_BACKUP;
    case 2: return RST_WATCHDOG;
    case 3: return RST_SOFTWARE;
    case 4: return RST_EXTERNAL;
    default: return 0;
  }
}

void MarlinHAL::reboot() { rstc_start_software_reset(RSTC); }

// ------------------------
// Free Memory Accessor
// ------------------------

extern "C" {
  extern unsigned int _ebss; // end of bss section
}

// Return free memory between end of heap (or end bss) and whatever is current
int freeMemory() {
  int free_memory, heap_end = (int)_sbrk(0);
  return (int)&free_memory - (heap_end ?: (int)&_ebss);
}

// ------------------------
// Serial Ports
// ------------------------

// Forward the default serial ports
#if USING_HW_SERIAL0
  DefaultSerial1 MSerial0(false, Serial);
#endif
#if USING_HW_SERIAL1
  DefaultSerial2 MSerial1(false, Serial1);
#endif
#if USING_HW_SERIAL2
  DefaultSerial3 MSerial2(false, Serial2);
#endif
#if USING_HW_SERIAL3
  DefaultSerial4 MSerial3(false, Serial3);
#endif

#endif // ARDUINO_ARCH_SAM
