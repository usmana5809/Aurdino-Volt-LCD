# Arduino ZMPT101B Voltage Sensor with LCD Display

This Arduino project measures both AC and DC voltages using the ZMPT101B sensor and displays the readings on a 16x2 LCD screen.

## Components Used

- ZMPT101B Voltage Sensor
- Arduino Board (e.g., Arduino Uno)
- 16x2 LCD with I2C Interface
- Potentiometer for LCD Contrast Adjustment

## Libraries Required

- [ZMPT101B](https://github.com/rrobinet/ZMPT101B) (Install via Arduino Library Manager)
- [LiquidCrystal_I2C](https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library) (Install via Arduino Library Manager)

## Circuit Diagram

![Circuit Diagram](link-to-your-circuit-diagram-image)

Describe your circuit diagram here, explaining how the ZMPT101B sensor and LCD are connected to the Arduino board.

## Setup

1. **Install Libraries**: Install the ZMPT101B and LiquidCrystal_I2C libraries using the Arduino Library Manager.

2. **Connect Components**:
   - Connect the ZMPT101B sensor to analog pin A0 on the Arduino board.
   - Connect the 16x2 LCD to the Arduino via I2C (usually A4 and A5).

3. **Adjust Sensitivity**:
   - Use the `SENSITIVITY` constant in the code to adjust the sensitivity based on your calibration needs.

4. **Upload Code**: Upload the provided Arduino sketch (`voltage_sensor_lcd.ino`) to your Arduino board.

5. **Monitor Output**:
   - Open the Serial Monitor to view AC and DC voltage readings.
   - The LCD will display real-time AC and DC voltages.

## Code Explanation

- **`setup()` Function**: Initializes serial communication, sets the ZMPT101B sensor sensitivity, and initializes the LCD.

- **`loop()` Function**: Continuously reads AC and DC voltages from the sensor, prints them to the Serial Monitor, and displays them on the LCD.

## Additional Notes

- Ensure the ZMPT101B sensor is rated for the voltage range you are measuring (typically 0-250V AC).
- Adjust the `SENSITIVITY` constant based on calibration values obtained from the sensor.

## Author

- **Usmana Zulfiqar**
- **Email:** usmanazulfiqar2001@gmail.com
- **GitHub:** [usmana5809](https://github.com/usmana5809)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
