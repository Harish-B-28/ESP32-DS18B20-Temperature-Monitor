# ESP32-DS18B20-Temperature-Monitor
Real-time temperature monitoring using the DS18B20 digital sensor and ESP32 with Arduino IDE.

# 🌡️ ESP32 Temperature Monitoring using DS18B20

A simple embedded systems project that demonstrates real-time temperature monitoring using an **ESP32 Development Board** and the **DS18B20 digital temperature sensor**. The ESP32 communicates with the sensor through the **OneWire protocol**, reads temperature values at regular intervals, and displays the results on the Arduino IDE Serial Monitor.

This project provides a practical introduction to digital sensor interfacing and serves as a foundation for developing IoT applications such as weather stations, environmental monitoring systems, and smart home automation.

---

# 📌 Project Overview

The objective of this project is to measure ambient temperature accurately using the DS18B20 digital temperature sensor and an ESP32 microcontroller.

Unlike analog temperature sensors, the DS18B20 provides digital output, ensuring high measurement accuracy and reducing signal noise. The ESP32 requests temperature data from the sensor using the OneWire communication protocol, processes the received values, and continuously displays the temperature in degrees Celsius through the Serial Monitor.

This project is suitable for beginners who want to learn embedded systems programming, sensor interfacing, and basic IoT hardware development.

---

# ✨ Features

* Real-time temperature measurement
* High-accuracy digital temperature sensing
* Uses OneWire communication protocol
* Displays temperature in Celsius
* Easy hardware setup with minimal components
* Compatible with Arduino IDE
* Low power consumption
* Expandable for Wi-Fi and IoT applications

---

# 🛠️ Hardware Components

| Component                          |    Quantity |
| ---------------------------------- | ----------: |
| ESP32 Development Board            |           1 |
| DS18B20 Digital Temperature Sensor |           1 |
| 4.7 kΩ Pull-up Resistor            |           1 |
| Breadboard                         |           1 |
| Jumper Wires                       | As required |
| USB Cable                          |           1 |

---

# 🔌 Circuit Connections

| DS18B20 Pin | ESP32 Pin |
| ----------- | --------- |
| VCC         | 3.3V      |
| GND         | GND       |
| DATA        | GPIO 4    |

> **Important:** Connect a **4.7 kΩ pull-up resistor** between the **DATA** pin and **3.3V** for reliable OneWire communication.

---

# 📚 Libraries Used

The following Arduino libraries are required:

* OneWire
* DallasTemperature

These libraries simplify communication with the DS18B20 sensor and temperature data processing.

---

# 💻 Installation

1. Install the Arduino IDE.
2. Install the ESP32 Board Package through the Boards Manager.
3. Install the **OneWire** library.
4. Install the **DallasTemperature** library.
5. Connect the ESP32 to your computer using a USB cable.
6. Open the `DS18B20_ESP32.ino` file.
7. Select the correct ESP32 board and COM port.
8. Upload the program.
9. Open the Serial Monitor.
10. Observe the live temperature readings.

---

# ⚙️ How It Works

1. The ESP32 initializes communication with the DS18B20 sensor.
2. The sensor measures the surrounding temperature.
3. The ESP32 requests the latest temperature value through the OneWire protocol.
4. The received temperature is processed and converted into degrees Celsius.
5. The measured value is displayed on the Arduino IDE Serial Monitor.
6. The process repeats continuously at fixed intervals, providing real-time temperature updates.

---

# 📊 Sample Output

```text
Temperature : 29.31 °C
Temperature : 29.37 °C
Temperature : 29.44 °C
Temperature : 29.50 °C
Temperature : 29.56 °C
```

---

# 📸 Project Images

Include the following images inside the **images** folder.

## Hardware Setup

![Hardware Setup](images/hardware_setup.jpg)

## Circuit Diagram

![Circuit Diagram](images/circuit_diagram.png)

## Serial Monitor Output

![Serial Output](images/serial_output.png)

---

# 🎯 Applications

* Weather Monitoring Systems
* Smart Home Automation
* Greenhouse Temperature Monitoring
* Industrial Temperature Monitoring
* Cold Storage Monitoring
* HVAC Systems
* IoT Environmental Monitoring
* Educational Embedded Systems Projects

---

# 🔮 Future Improvements

* Display temperature on an OLED display
* Wi-Fi-based remote monitoring
* Integration with MQTT protocol
* ThingSpeak cloud data logging
* Blynk mobile application integration
* Email or mobile alert notifications
* Data logging to an SD card
* Web dashboard for live monitoring

---

# 👨‍💻 Author

**HARISH**


GitHub: https://github.com/yourusername

---

# 📄 License

This project is licensed under the **MIT License**.

You are free to use, modify, and distribute this project under the terms of the MIT License. See the `LICENSE` file for more information.
