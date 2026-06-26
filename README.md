# ESP32-DS18B20-Temperature-Monitor-with-Blynk-Iot 
Real-time temperature monitoring using the DS18B20 digital sensor and ESP32 with Arduino IDE and Blynk iot platform.

# 🌡️ ESP32 IoT Temperature Monitoring using DS18B20 and Blynk

An IoT-based embedded systems project that demonstrates real-time temperature monitoring using an ESP32 Development Board, the DS18B20 digital temperature sensor, and the Blynk IoT platform.

The ESP32 reads temperature data from the DS18B20 sensor using the OneWire protocol and transmits the readings over Wi-Fi to the Blynk Cloud. Users can monitor live temperature values from anywhere using the Blynk mobile application or Blynk Web Dashboard, making the project suitable for remote environmental monitoring applications.

This project introduces digital sensor interfacing, cloud connectivity, and IoT dashboard development using the ESP32 platform.

---

# 📌 Project Overview

The objective of this project is to develop a real-time IoT temperature monitoring system using the ESP32 and the DS18B20 digital temperature sensor.

The DS18B20 accurately measures ambient temperature and communicates with the ESP32 through the OneWire protocol. The ESP32 processes the sensor data, connects to a Wi-Fi network, and uploads the temperature readings to the Blynk IoT Cloud.

Users can monitor live temperature data remotely through the Blynk mobile application or web dashboard, enabling continuous monitoring from virtually anywhere with an internet connection.

This project demonstrates the integration of embedded systems, wireless communication, cloud platforms, and IoT application development.

---

# ✨ Features

* Real-time temperature monitoring
* High-accuracy DS18B20 digital temperature sensor
* ESP32 Wi-Fi connectivity
* Live monitoring using the Blynk IoT platform
* Remote access through the Blynk mobile app and web dashboard
* OneWire communication protocol
* Arduino IDE compatible
* Low-cost and scalable IoT solution
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
* Blynk

---

# ⚙️ How It Works

1. The DS18B20 measures the ambient temperature.
2. The ESP32 reads the sensor data through the OneWire protocol.
3. The ESP32 connects to the configured Wi-Fi network.
4. The temperature readings are uploaded to the Blynk Cloud.
5. Users can monitor live data through the Blynk mobile application or Blynk Web Dashboard.
6. The process repeats continuously, providing real-time remote temperature monitoring.
   
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

* Smart Home Monitoring
* Remote Temperature Monitoring
* Industrial IoT Systems
* Greenhouse Monitoring
* Cold Storage Monitoring
* Weather Monitoring Stations
* Smart Agriculture
* Environmental Monitoring
* 
---

# 🔮 Future Improvements

* Push notifications for high-temperature alerts
* Historical data visualization
* Email and SMS alerts
* Integration with additional environmental sensors
* OLED display for local monitoring
* MQTT and Home Assistant integration
* Relay control based on temperature thresholds
* Data export and analytics
---

# 👨‍💻 Author

**HARISH**


GitHub : https://github.com/Harish-B-28

---

# 📄 License

This project is licensed under the **MIT License**.

You are free to use, modify, and distribute this project under the terms of the MIT License. See the `LICENSE` file for more information.
