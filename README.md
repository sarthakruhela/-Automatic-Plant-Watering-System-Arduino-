Automatic-Plant-Watering-System-Arduino
This project is an Automatic Plant Watering System built using Arduino Uno and a soil moisture sensor. The system continuously monitors soil moisture levels and automatically activates a water pump when the soil becomes dry, ensuring plants receive adequate water without manual intervention.
🔧 Components Used

Arduino Uno
Soil Moisture Sensor
DC Water Pump (Motor)
LED (Status Indicator)
Buzzer (Alert)
Resistors
9V Battery / Power Supply
Connecting Wires

⚙️ Working Principle

The soil moisture sensor measures the moisture level of the soil and sends an analog signal to the Arduino.
The Arduino compares the sensor value with a predefined threshold.
If the soil is dry:
The water pump turns ON
The LED lights up
The buzzer activates as an alert
If the soil is wet:
The pump turns OFF
The LED and buzzer remain OFF

🧠 Code Logic

Sensor is connected to analog pin A0
Pump, LED, and buzzer are controlled using digital output pins
The system checks soil moisture every 1 second using a delay

📌 Features

Fully automatic watering
Prevents over-watering
Simple and cost-effective design
Can be extended with LCD, IoT, or mobile app integration

🛠️ Simulation
The circuit and code were designed and tested using Tinkercad Circuits.
