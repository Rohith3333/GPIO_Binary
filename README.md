# 🔢 ESP8266-Binary-Counter

This repository contains a simple **4-bit binary counter** built using an **ESP8266** (NodeMCU or Wemos D1 mini). The counter increments or decrements values between `0` and `15`, displaying the result in binary using 4 LEDs.

---

## 🚀 Features

- Built using an **ESP8266** board (NodeMCU/Wemos)
- Two push buttons: one for increment, one for decrement
- Binary value shown on 4 LEDs
- Uses internal pull-up resistors for buttons
- Debounce handling for clean button presses
- Wrap-around counting from 15 to 0

---

## ⚙️ Hardware Used

- ESP8266 Board (NodeMCU or Wemos D1 mini)
- 4 x LEDs
- 2 x Push Buttons
- Breadboard and jumper wires

> No external resistors are required due to the use of internal pull-ups and low-power LEDs.

---

## 📌 GPIO Connections

| Function         | ESP8266 GPIO Pin |
|------------------|------------------|
| LED 0 (LSB)       | GPIO 5 (D1)       |
| LED 1             | GPIO 4 (D2)       |
| LED 2             | GPIO 0 (D3)       |
| LED 3 (MSB)       | GPIO 2 (D4)       |
| Increment Button  | GPIO 12 (D6)      |
| Decrement Button  | GPIO 13 (D7)      |

> Buttons are connected between GPIO pins and GND.

---

## ✅ How to Use

1. Connect the hardware as per the table above.
2. Upload the code using Arduino IDE (select ESP8266 board).
3. Press the increment button (D6) to count up.
4. Press the decrement button (D7) to count down.
5. LEDs will display the binary equivalent of the count (0–15).

---

## 🧠 Concepts Practiced

- GPIO handling with ESP8266
- Digital input and output
- Bitwise operations for binary representation
- Using internal pull-up resistors
- Button press edge detection

---

## 🏷️ Tags

`#ESP8266` `#NodeMCU` `#EmbeddedSystems` `#BinaryCounter` `#ArduinoIDE`

---

## 👨‍💻 Author

**Rohith Manne**  
[LinkedIn](https://www.linkedin.com/in/rohith-manne) • [GitHub](https://github.com/Rohith3333)

---

⭐ Star this repository if you found it helpful!
