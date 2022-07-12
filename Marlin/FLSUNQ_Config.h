/*==========================================================================
*=================== FLSunQ - DELTA Printers ===============================
*================= With pins_FLSUN_HiSPEED.h BOARD (QQS-Pro)================
*================= With pins_MKS_ROBIN_NANO.h BOARD (Q5)====================
*===========================================================================
*                         MARLIN_v2.0.9.x
* For a Delta printer start with one of the configuration files in the
* config/examples/delta/FLSUN/ directory and customize for your machine.
* 
* Wiki: https://github.com/Foxies-CSTL/Marlin_2.0.x/wiki
* 
* TIPS/NOTES:
* -For TMC mode UART, look the "pins_FLSUN_HISPEED.h" file (src/pins/stm32f1/) for more information to wire.
* -To enable Stallguard function (Homing and/or probing) with TMC2209 with wiring Diag/EndStop.
* -Comment/Uncomment line to add or modify some options. 
*  Default is actif for QQS and it's uncommented ;-)
*/
#include "Config_XP.h"  //For tests on my dev'printer!!
//#define DBUG
/*_______________________1___________________________*/
//==================== Hardware =====================//
/*-------------Motherboard/Printer-(1 CHOICE)-------*/
#define QQSP                       //  (Default_QQS) env = flsun_hispeedv1
//#define Q5                         // env = mks_nano_robin35 (change in platformio.ini file or 
                                     // click on the "Default" icon on the bottom edge of the window and 
                                     // choose "mks_robin_nano35").

/*________________________2___________________________*/
          /*-----Type Drivers-(1 CHOICE)-----*/
/* MODE STOCK for QQS & Q5 */
//#define STOCK                         // (S) (Default_QQS) For 4xA4988(green or red color).
                                      // (S) (Default_Q5) For 3xTMC2208+1xA4988.

/* MODE STANDALONE XYZ+E for QQS & Q5 */
//#define ALL_TMC8                     //(8) For 4xTMC2208_STANDALONE
//#define ALL_TMC9                     //(9) For 4xTMC2209_STANDALONE

/* MODE UART XYZ+E for QQS & Q5 */
//#define Q_UART8                      //(U8) 4xTMC2208 Note: remove on your printer the module WIFI and wire your TMC.
//#define Q_UART9                      //(U9) 4xTMC2209 Note: remove on your printer the module WIFI and wire your TMC.

/* SPECIAL MODE UART XYZ+E for QQS-Pro */
//#define QQS_UARTH                     //(UH) Mode special 2209 wiring with one I/O pin (Remove module ESP12)

/**========================2bis=================================//
 * -- If you have an other stepper driver for EXTRUDER----------//
 * -- Uncomment and choose Options: ----------------------------//
 * -- A4988/DRV8825/LV8729/...      ----------------------------//
 * -- TMC2208_STANDALONE/TMC2209_STANDALONE/TMC2208/TMC2209. ---//
 * =============================================================//
 */
//#define DRIVER_EXT A4988//TMC2209_STANDALONE //TMC2209  // LV8729//
//Only WITH Q5 older stepper(A4988/DRV8825/LV8729)
//#define INV_EXT

/*__________________________3________________________________*/
        /** =============================
        * =====Type of TFT screen ======
        * = Driver TFT Color (1 CHOICE)=
        * ==============================
        */
//#define MKS_ROBIN_TFT32        // (Default) Mks_Robin_TFT_V2.0
//#define MKS_TS35_V2_00       // Only for NanoV2 or V3
//#define TFT_GENERIC          // For the user who haven't the same screen.

//#define DGUS_LCD_UI_MKS      // Mks_H43_v1.0 
//Note for H43: The wiring is done on the UART2 (Wifi socket pins(PA10/PA9) for Tx/Rx).

                /*--- Choice UI TFT ----*/
//#define TFT_COLOR_UI                     //(C) (Default) UI Color MARLIN
//#define TFT_CLASSIC_UI                 //(F) Standard LCD (UI Classic LCD)
//#define TFT_LVGL_UI                    //(I) Standard LCD (UI Color MKS)

//#define TOUCH_SCREEN                     //(C/F) (Default) UI MARLIN

/* ======================================//
* === Note:Languages already integrated==// 
* ==in the menu UI_COLOR(fr, de, es, it)=//
* =======================================//
*/
//#define LCD_LANGUAGE en                // Change for your country ('bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'el':'Greek', 'fi':'Finnish', 'hr':'Croatian', 'hu':'Hungarian', 'jp_kana':'Japanese', 'nl':'Dutch', 'pl':'Polish', 'pt_br':'Portuguese (Brazilian)', 'ro':'Romanian', 'ru':'Russian', 'sk':'Slovak', 'sv':'Swedish', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', etc)
//#define BOOT_MARLIN_LOGO_SMALL         // Small Logo Marlin to reduce de binary. Comment to have normal LOGO(Default).

/*__________________________4______________________________*/
                  /*----  Modules -----*/

//#define MKS_WIFI                         //(W) (Default_QQS) Module ESP8266/ESP12
//#define ESP3D_30                       //(w) Enable firmware ESP3D v3.0 (ESP8266/ESP12)

/*For LedStrip which need an external power source on Vcc pin.*/
//#define NEOPIXEL_LED                   //(N) Use port GPIO Wifi module (PC7)

/**=========================================================
 * =========================================================
 * = QQS/Q5 Stock have a clone (T)ITAN EXtruder(Default),===
 * = If you have another choose by uncomment your extruder.=
 * = Also you can change the direction.=====================
 * ====== Default eStep (T=397/422)/(B=417)/(N+722) ========
 * =========================================================
 */
//#define INV_EXT                        // Uncommment to reverse direction for BMG/Sherpa.

// BMG Extruder (B) Extruder step(417).
//#define BMG                            //(B) Uncommment for BMG Left/Right.
//#define NEMA14                         //(N) Uncommment for Mini-Sherpa/SuperDrive.

/*__________________________5_____________________________*/
      /** =============================
      * ======= MODE LEVELING==========
      * == type Calibration UBL or ABL=
      * ========= 1 CHOICE)============
      * ===============================
      */

//#define DELTA_HOME_TO_SAFE_ZONE      // Option to move down after homing to a height where XYZ movement is unconstrained.
//#define PREHEAT_BEFORE_PROBING         //(P) (Default) Run a PreHeat bed at 60°C
//#define PREHEAT_BEFORE_LEVELING    
//#define AUTO_BED_LEVELING_UBL          //(U) (Default) Wizard UBL includes. 

// ---Expe tools Levelling-------
//#define G26_MESH_VALIDATION          // Print Mesh Validation Pattern tool(By menu).
//#define LEVEL_BED_CORNERS

//--------IF YOUR USED ABL, DISABLE "SPECIAL MENU DELTA"= #define CUSTOM_MENU_MAIN
//#define AUTO_BED_LEVELING_BILINEAR   //(A)

/*_______________________6____________________*/
  //======Many options for Modules: ========//
#define LIN_ADVANCE                //(L) (Default2209) with K=0 For TMC_UART2208 prefer mode spreadCycle(by TFT menu) or commented if problem.
#define POWER_LOSS_RECOVERY        // (Default) Continue print after Power-Loss.

// WARNING:These options need wiring pins DIAG to EndStop plug(Signal).
// more at the bottom page.
//#define STALLGUARD_1               // Special mod for TMC2209 = SENSORLESS_HOMING
//#define STALLGUARD_2               // Special mod for TMC2209 = SENSORLESS_PROBING

//For other PROBE fixed without deploy like IR, buzzer, Nozzle, ...
//#define X_PROBE                   // Set to invert the logic of the PROBE.
//#define Z_OFFSET -2.5             // Set your own OffSet

//=================================================================================//
//======================== End_Hardware ===========================================//
//=================================================================================//

/*__________________________7__________________________*/
/** =====================================================
 *  ==== For users who dont have a terminal ============= 
 * = like (Prontoface/Octoprint/HostRepertier/Astoprint)=
 * ====== Choice add menu on TFT: (OPT) =================
 */
//#define ADD_MENUS                      //  (Default) Add menu PID, DELTA, INFO,...

// For user who change their nozzle thermistor 
// by another one ex: "ATC Semitec 104GT-2" = 5 
//#define TEMP_SENSOR_0 13             // uncomment with a good number/type.

/*__________________________8__________________________*/
/** ===================================================
* == Option for Host (OCTOPRINT,REPETIER,PRONTERFACE,ESP3D, etc)
* ======================================================
*/
//#define HOST_ACTION_COMMANDS     // Action Command Prompt support Message on Octoprint
//#define BINARY_FILE_TRANSFER     // Bin transfert for ESP3D firmware v2.1 or others.
                                   // Not compatible with the MEATPACK option. 

//------ Support for MeatPack G-code compression (OCTOPRINT)--------//
#define MEATPACK_ON_SERIAL_PORT_1       //(M) With connection USB
//#define MEATPACK_ON_SERIAL_PORT_2       // With other connection like Tx/Rx Wifi socket.

/** ========================================
* == Options for Modules Hardware MKS_WIFI
* ==========================================
* Note:You must update the Wifi module with
* the ESP3D firmware or the MKS(Stock) firmware.
* https://github.com/Foxies-CSTL/Marlin_2.0.x/wiki/5.Firmware-Wifi
*/
// 
#ifdef MKS_WIFI
  #define WIFI_ESP
  #ifdef ESP3D_30
    #define MKS_WIFI_MODULE           // Work with TFT_LVGL_UI(Modern UI using LVGL-MKS)
    #define USES_MKS_WIFI_FUNCTION    // Bin transfert MKS for ESP3D firmware v3.0 or others
  #endif
#endif

//= For users who dont have a terminal =//
#ifdef ADD_MENUS
  #define DELTA_CALIBRATION_MENU        //  (Default) Auto for CLASSIC and COLOR.
  #define PID_EDIT_MENU                 //  (Default) Tune PID Bed and Nozzle.
  #define PID_AUTOTUNE_MENU             //  (Default) Tune auto PID.
  #define LCD_INFO_MENU                 //  (Default) Informations printer.
  //#define PREHEAT_SHORTCUT_MENU_ITEM  // Add preheat/temperature menu (first page)
  //#define CANCEL_OBJECTS              // Add menu "Cancel Objet"
  #ifndef STALLGUARD_2                   
  // Only with TMC2209 sensorless (need wiring DIAG pins)
    #define PROBE_OFFSET_WIZARD
    #define CUSTOM_MENU_MAIN
  #endif
  #ifdef NEOPIXEL_LED
    #define LED_CONTROL_MENU          // To control LedStrip.
  #endif
#endif

//TFT Type For TFT_GENERIC
#if ENABLED(TFT_GENERIC)
  #ifdef TS35
    #define TFT_DRIVER ST7796 // for new TS35v2
    #define TFT_RES_480x320
    #define TFT_INTERFACE_SPI
  #else
    #define TFT_DRIVER AUTO 
    #define TFT_INTERFACE_FSMC  //Default socket on MKS_nano, mini, hispeed.
    #define TFT_RES_320x240
  #endif  
#endif

/**
 * =================================================
 * ===Part for Hardware definitions=================
 * ===Don't change if you're not sure how to do it.= 
 * =================================================
 */

// Set for QQS(4xA4988) or Q5(3x2208+A4988) 
#ifdef STOCK
  #ifdef Q5
    #define DRIVER_AXES TMC2208_STANDALONE
  #else
    #define DRIVER_AXES A4988
  #endif  
  #ifndef DRIVER_EXT
    #define DRIVER_EXT A4988
  #endif
#endif

// Set for TMC2208_STANDALONE
#ifdef ALL_TMC8
    #define Q_TMC
    #undef LIN_ADVANCE
    #define DRIVER_AXES TMC2208_STANDALONE
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2208_STANDALONE
    #endif
#endif
// Set for TMC2209_STANDALONE 
#ifdef ALL_TMC9
    #define Q_TMC
    #define DRIVER_AXES TMC2209_STANDALONE
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2209_STANDALONE
    #endif
#endif

// Software Serial UART for TMC2208
#ifdef Q_UART8
    #define Q_TMC
    #define DRIVER_AXES TMC2208
    #ifndef DRIVER_EXT
      #undef LIN_ADVANCE
      #define DRIVER_EXT TMC2208
    #endif
#endif

// Software Serial UART for TMC2209
#ifdef Q_UART9
    #define Q_TMC
    #define STEALTHCHOP_E
    #define DRIVER_AXES TMC2209
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2209
    #endif
#endif
//Add definition for UART9 for Q5
#if BOTH(Q5, Q_UART8)||BOTH(Q5, Q_UART9)
    #define X_SERIAL_TX_PIN                   PA10  // RXD1
    #define X_SERIAL_RX_PIN                   PA10  // RXD1
    #define Y_SERIAL_TX_PIN                   PA9   // TXD1
    #define Y_SERIAL_RX_PIN                   PA9   // TXD1
    #define Z_SERIAL_TX_PIN                   PC7   // IO1
    #define Z_SERIAL_RX_PIN                   PC7   // IO1
    #define E0_SERIAL_TX_PIN                  PC13  // IO0
    #define E0_SERIAL_RX_PIN                  PC13  // IO0
    #define TMC_BAUD_RATE                    19200
#endif

/**---------------------------//
 * Special mods TMC2209:      //
 *                            //
 * UART: Single wire          //
 * SENSORLESS: Homing/Probing //
 * ---------------------------//
 */

// Note:
// HardwareSerial with one pins for four drivers
// Compatible with TMC2209. Provides best performance.
// Requires SLAVE_ADDRESS definitions in Configuration_adv.h
// and proper jumper configuration. Uses I/O pins PA8(Default QQS).
#ifdef QQS_UARTH
    #define Q_TMC
    #define TMC_HARDWARE_SERIAL
    #define STEALTHCHOP_E
    #define DRIVER_AXES TMC2209
    #ifndef DRIVER_EXT
      #define DRIVER_EXT TMC2209
    #endif
#endif

// Note:
// Need wiring pins DIAG to EndSTOP(Signal).

// Use the function Stallguard1 for homing without endstop
// (Need to adjust the sensitivity).
// SENSORLESS_HOMING             
#ifdef STALLGUARD_1
  #define SENSORLESS_HOMING
#endif
// Use the function StallGuard2 for probing with the nozzle.
// SENSORLESS_PROBING
#ifdef STALLGUARD_2
  #define N_PROBE
  #define Z_OFFSET 0
#endif

//===================PART CONSTANTS VARIALBES ===================//

// Variables to calculate steps and current
//eSteps
#ifndef EXTRUDER_STEPS
  #ifdef NEMA14
    #define EXTRUDER_STEPS 722  // Extruder Mini-Sherpa
  #elif ENABLED(BMG)
    #define EXTRUDER_STEPS 420  // Extruder BMG(Left/Right)
  #else
    #define EXTRUDER_STEPS 410  // Extruder TITAN(Default)
  #endif
#endif
//Jerk
#ifndef XYZJERK
  #define XYZJERK  25
#endif
#ifndef EJERK
  #define EJERK    15
#endif
//Z_OffSet
#ifndef Z_OFFSET
  #ifndef Q5
    #define Z_OFFSET       -16.2
  #else
    #define Z_OFFSET       -18
  #endif
#endif
// TMC Current in UART mode
#ifndef XYZ_CURRENT
  #define XYZ_CURRENT       900
#endif
#ifndef XYZ_CURRENT_HOME
  #define XYZ_CURRENT_HOME  600
#endif  
#ifndef E_CURRENT
  #ifdef NEMA14
    #define E_CURRENT       300
  #else
    #define E_CURRENT       850
  #endif
#endif
