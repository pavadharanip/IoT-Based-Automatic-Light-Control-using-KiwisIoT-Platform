# IoT-Based-Automatic-Light-Control-using-KiwisIoT-Platform

## 📌 Project Overview

This project is an IoT-based Smart Street Light Monitoring System developed using the **NodeMCU ESP8266 and LDR sensor**.

The LDR sensor detects the surrounding light intensity and automatically controls the LED based on the lighting conditions. The system identifies whether the environment is DARK or BRIGHT and sends the sensor readings and LED status to the **KiwisIoT platform** through Wi-Fi.

## 🎯 Objectives

- To understand the basic concepts of IoT.
- To detect surrounding light intensity using an LDR sensor.
- To automatically control street lights based on light conditions.
- To monitor LED status remotely using KiwisIoT.
- To understand Wi-Fi-based communication between hardware and cloud platforms.

## 🧰 Components Required

- NodeMCU ESP8266
- LDR Sensor
- 10KΩ Resistor
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

## 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Library
- KiwisIoT Platform

## 🔌 Circuit Connections

| Component | NodeMCU ESP8266 |
|---|---|
| LDR | 3.3V and A0 through voltage divider |
| 10KΩ Resistor | A0 and GND |
| LED Positive | D2 through 220Ω resistor |
| LED Negative | GND |

## ⚙️ Working Principle

1. The LDR sensor detects the surrounding light intensity.
2. NodeMCU ESP8266 reads the analog value from the LDR sensor.
3. The system checks whether the environment is DARK or BRIGHT.
4. During DARK conditions, the LED automatically turns ON (HIGH).
5. During BRIGHT conditions, the LED turns OFF (LOW).
6. The sensor readings and LED status are transmitted to the KiwisIoT platform through Wi-Fi.
7. The data can be monitored through the KiwisIoT dashboard.

## ☁️ KiwisIoT Platform Configuration

The KiwisIoT platform is used to monitor the street light system.

**Channel Configuration:**

| Channel | Parameter |
|---|---|
| Channel 0 | LDR Value |
| Channel 1 | DARK / BRIGHT |
| Channel 2 | LED HIGH / LOW |
| Channel 3 | LED Status (1 / 0) |

## 📊 System Output

**DARK Condition:**
- Light Condition: DARK
- LED Status: HIGH
- LED: ON

**BRIGHT Condition:**
- Light Condition: BRIGHT
- LED Status: LOW
- LED: OFF

## 📚 Learning Outcomes

Through this project, I learned:

- Interfacing an LDR sensor with NodeMCU ESP8266.
- Understanding analog input readings.
- Using conditional statements in Arduino programming.
- Implementing automatic LED control.
- Establishing Wi-Fi connectivity.
- Sending real-time sensor data to KiwisIoT.
- Monitoring hardware status through an IoT dashboard.

## 🚀 Future Improvements

- Control multiple street lights.
- Monitor street lights remotely.
- Add fault detection for street lights.
- Develop a centralized street light monitoring system.
- Improve energy efficiency through automatic lighting control.
