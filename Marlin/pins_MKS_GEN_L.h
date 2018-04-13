/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME "MKS GEN L"

//
// Servos
//
#define SERVO0_PIN         -1
#define SERVO1_PIN         -1
#define SERVO2_PIN         -1
#define SERVO3_PIN         -1

//
// Limit Switches
//
#define X_MIN_PIN          63
#define X_MAX_PIN          -1
#define Y_MIN_PIN          40
#define Y_MAX_PIN          -1
#define Z_MIN_PIN          65 //42
#define Z_MAX_PIN          -1

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  65
#endif

//
// Steppers
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_CS_PIN           59

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_CS_PIN           64

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_CS_PIN           11

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          66

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          -1

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input

//
// Heater 
//
#define HEATER_0_PIN       10
#define HEATER_1_PIN       7
#define HEATER_BED_PIN     8

//
// Fans
//
#define MKS_FAN_E0_PIN   9
#define MKS_FAN_E1_PIN   -1
#define MKS_FAN_PART_PIN       4
#define MKS_FAN_PSU_PIN        5
#define MKS_FAN_BOARD_PIN      6
#define MKS_FAN_CONTROLLER_PIN 49

#define FAN_PIN            MKS_FAN_PART_PIN
#define FAN1_PIN           MKS_FAN_BOARD_PIN
#define FAN2_PIN           MKS_FAN_PSU_PIN


//
// Misc. Functions
//
#define SDSS               -1 //SD Card SS
#define LED_PIN            -1
#define FILWIDTH_PIN       -1   // Analog Input on AUX2
#define FIL_RUNOUT_PIN     -1
#define PS_ON_PIN          -1
#define MKS_CASE_LIGHT_PIN 44     // MUST BE HARDWARE PWM



//#define BEEPER_PIN        42
// not connected to a pin
//#define LCD_BACKLIGHT_PIN 65   // backlight LED on A11/D65

#define DOGLCD_A0         31
#define DOGLCD_CS         33

// GLCD features
//#define LCD_CONTRAST   190
// Uncomment screen orientation
//#define LCD_SCREEN_ROT_90
//#define LCD_SCREEN_ROT_180
//#define LCD_SCREEN_ROT_270

#define BTN_EN1           27
#define BTN_EN2           29
#define BTN_ENC           25

#define BTN_BACK          41



//#define SDSS              53
//#define SD_DETECT_PIN     49
//#define KILL_PIN          64



