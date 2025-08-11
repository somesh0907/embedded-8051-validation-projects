# 8051 Embedded System Projects

## Project Overview  
This repository contains a collection of embedded system projects developed for the 8051 microcontroller using C programming language. The projects cover essential concepts such as GPIO control, UART communication, I2C, SPI protocols, and interfacing with peripherals like LEDs, switches, 7-segment displays, LCDs, and sensors. These projects aim to provide practical learning examples for beginners and intermediates working on 8051 microcontrollers.

---

## Prerequisites

### Software  
- **Keil µVision IDE (Version 5 or later):**  
  Used to write, compile, and debug embedded C code targeting the 8051 microcontroller family.  
  Download from: [https://www.keil.com/demo/eval/](https://www.keil.com/demo/eval/)

- **Proteus Design Suite (Version 8 or later):**  
  Used for circuit simulation, including microcontroller and peripheral hardware emulation.  
  Download from: [https://www.labcenter.com/downloads/](https://www.labcenter.com/downloads/)

### Hardware (Optional)  
To test these projects on real hardware, the following components are recommended:  
- 8051 Microcontroller development board or standalone AT89C51/52 series chip  
- LEDs and Resistors  
- Push-button switches  
- 7-segment displays or LCD modules  
- UART interface hardware (e.g., USB to serial converter)  
- Sensors or modules used in specific projects (e.g., ADC, IR sensor)

---

## Getting Started: Build and Simulate in Keil  

1. **Open Keil µVision IDE.**  
2. **Create a new project:**  
   - Go to **Project > New Project**.  
   - Select a folder to save your project files.  
   - Choose the microcontroller device (e.g., AT89C51).  
3. **Add source files:**  
   - Right-click on **Source Group 1** in the Project window.  
   - Select **Add Existing Files to Group 'Source Group 1'**.  
   - Navigate to the C source files (*.c) and add them.  
4. **Configure project options:**  
   - Click **Project > Options for Target 'Target 1'**.  
   - Under the **Device** tab, confirm the selected microcontroller.  
   - Under the **Output** tab, enable **Create HEX File**.  
   - Under the **Debug** tab, configure debugging options if needed.  
5. **Build the project:**  
   - Click the **Build** button or press **F7**.  
   - Verify that the build completes without errors.  
6. **Locate the HEX file:**  
   - After successful build, the HEX file will be in the project folder (usually `Target\*.hex`).

---

## Simulate the Project in Proteus  

1. **Open Proteus Design Suite.**  
2. **Load the schematic file:**  
   - Open the project schematic file provided (*.pdsprj or *.dsn).  
3. **Assign HEX file to microcontroller:**  
   - Double-click on the 8051 microcontroller in the schematic.  
   - In the **Program File** field, browse and select the HEX file generated from Keil.  
4. **Run the simulation:**  
   - Click the **Play** button to start simulation.  
   - Interact with simulated components (push buttons, UART terminal, etc.) as per the project instructions.  
5. **Observe the outputs:**  
   - Check LED toggling, 7-segment display updates, UART messages on virtual terminal, and other behaviors.  

---

## Testing UART and LED Functionality

- **UART Testing:**  
  - Use the **Virtual Terminal** in Proteus to send characters to the microcontroller via UART.  
  - The microcontroller should respond or echo back data as per the program logic.  
  - You can simulate commands or data communication to test UART routines.  

- **LED Testing:**  
  - Press virtual push-button switches connected to GPIO pins.  
  - LEDs connected to output pins should turn ON/OFF accordingly.  
  - Confirm that the LED states match expected behavior (e.g., toggling on switch press or UART commands).

---

## How to Extend or Modify the Projects

- **Add New Features:**  
  - Open the source code in Keil and add new functionality or peripheral support.  
  - For example, implement additional UART commands, integrate SPI sensors, or add LCD display output.  

- **Update Hardware Schematic:**  
  - Open the Proteus schematic.  
  - Add new components like sensors, relays, or displays.  
  - Connect components to the microcontroller pins according to your design.  

- **Test and Debug:**  
  - Rebuild the code in Keil to generate an updated HEX file.  
  - Load the new HEX into Proteus and simulate the updated hardware.  
  - Use Keil debugger or Proteus simulation breakpoints for troubleshooting.  

---

## Additional Tips

- **Clock Frequency:**  
  Set the correct crystal oscillator frequency in both Keil and Proteus to match your hardware (commonly 12 MHz for 8051).  

- **Interrupts:**  
  Some projects may use interrupts—ensure interrupt settings and vector addresses match your microcontroller datasheet.  

- **UART Baud Rate:**  
  Configure baud rate properly in code and Proteus UART terminal to ensure proper serial communication.  

- **Proteus Library:**  
  If a component is missing in Proteus, download the necessary library or use an equivalent model.

---

## Contact and Support  
If you have questions or want to contribute, please open an issue or submit a pull request on this repository.  

---

**Thank you for checking out my 8051 embedded projects!**
