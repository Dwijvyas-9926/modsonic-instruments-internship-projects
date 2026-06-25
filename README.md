# LCD Display & Matrix Key Interface Upgrade for Ultrasonic Thickness Gauge

> Industrial Internship Project at **Modsonic Instruments Mfg. Co. (P) Ltd., Anand**

## Overview

This repository contains the firmware, documentation, and implementation details of embedded systems projects completed during my industrial internship at **Modsonic Instruments**.

The primary objective was to modernize the user interface of an industrial Ultrasonic Thickness Gauge by replacing its legacy segment LCD and mechanical keypad with a modern TFT color display and capacitive touch interface while preserving the original ultrasonic measurement algorithms.

---

## Internship Details

**Company:** Modsonic Instruments Mfg. Co. (P) Ltd.

**Location:** Anand, Gujarat, India

**Intern:** Dwij Vyas & Roshan Mali

**College:** Birla Vishvakarma Mahavidyalaya (BVM)

**Department:** Electronics & Communication Engineering

---

## Project 1

### TFT LCD & Capacitive Touch Upgrade for Ultrasonic Thickness Gauge

### Objective

* Replace legacy 4-digit segment LCD
* Integrate 320×240 TFT LCD (ST7789VI)
* Replace mechanical keys with TTP229 capacitive keypad
* Preserve existing ultrasonic measurement firmware
* Improve usability with a modern graphical interface

### Hardware

* AVR128DA48
* ST7789VI TFT LCD
* TTP229 Capacitive Touch Controller
* 74HC4040 Counter
* Internal EEPROM

### Software

* Embedded C
* MPLAB X IDE
* XC8 Compiler

### Features

* High-speed SPI TFT driver
* Professional graphical user interface
* Live ultrasonic measurement display
* Battery indicator
* MM / Inch switching
* Diagnostic Mode
* Brightness Control
* Button Test
* EEPROM calibration storage
* Optimized display refresh
* Power management

---

## Project 2

### 4-Digit LCD Driver using PCF85176

This project implements a complete firmware driver for a Clover S5026 passive LCD panel using the PCF85176 I²C LCD driver.

### Features

* Custom I²C Driver
* Flexible segment mapping
* Static LCD drive mode
* Display buffer management
* Seven-segment lookup table
* AVR128DA48 firmware implementation

---

## Repository Structure

```text
├── Project-1-TFT-Upgrade
│   ├── Source_Code
│   ├── Images
│   ├── Documentation
│   └── Firmware
│
├── Project-2-PCF85176-LCD
│   ├── Source_Code
│   ├── Images
│   ├── Documentation
│   └── Firmware
│
├── Report
│   └── Internship_Report.pdf
│
└── README.md
```

---

## Technologies

* Embedded C
* AVR128DA48
* SPI
* I²C (TWI)
* ST7789VI TFT Display
* TTP229 Capacitive Touch
* PCF85176 LCD Driver
* EEPROM
* MPLAB X IDE
* Git
* GitHub

---

## Skills Developed

* Embedded Firmware Development
* Hardware Interfacing
* TFT Graphics Programming
* LCD Driver Development
* PCB Hardware Debugging
* SPI Communication
* I²C Communication
* EEPROM Management
* Industrial Product Development
* Firmware Optimization

---

## Results

* Successfully upgraded the industrial Ultrasonic Thickness Gauge with a modern graphical user interface.
* Preserved the existing ultrasonic measurement pipeline while integrating new hardware.
* Developed a configurable LCD driver for passive segment displays.
* Gained practical experience in industrial embedded systems development and hardware debugging.

---

## Disclaimer

This repository is intended for educational and portfolio purposes only.

Any confidential source code, production firmware, PCB designs, proprietary algorithms, or company intellectual property belonging to **Modsonic Instruments Mfg. Co. (P) Ltd.** has been excluded. Only material approved for public release is included.

---

## Author

**Dwij Vyas & Roshan Mali**

Electronics & Communication Engineering

Birla Vishvakarma Mahavidyalaya (BVM)


