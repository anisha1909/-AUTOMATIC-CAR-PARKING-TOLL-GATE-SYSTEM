# AUTOMATIC CAR PARKING TOLL GATE SYSTEM


Objective: 
To design an automatic car parking toll gate system that utilizes RFID technology for secure and efficient vehicle identification and toll management.  

Project Description:
This project implements an automatic toll gate system using an RFID module and an Arduino microcontroller. The system identifies vehicles based on their unique RFID tags, enabling hands-free access and toll payment in parking lots or toll plazas.  

 Key Features:  
1. RFID-based Vehicle Identification:
   - Vehicles are equipped with RFID tags containing unique identifiers.  
   - The RFID reader detects and reads the tag when the vehicle is near the toll gate.  

2. LED Indication System:
   - Green LED: Indicates access granted, and the gate is open.  
   - Red LED: Indicates access denied or the gate remains closed.  

3. Access Logic:  
   - On the first RFID swipe, the system triggers the red LED to signify toll processing and prepares for gate operations.  
   - On the second swipe, the green LED is activated, signaling that the toll process is complete, and the gate opens.  

4. Efficient Gate Management: 
   - Automates toll collection and vehicle entry, reducing human intervention.  
   - Ensures secure and efficient operation for busy parking lots or toll plazas.  

5. Real-time Feedback: 
   - Displays the RFID tag's unique identifier on the serial monitor for monitoring and verification.  

6. Fail-safe Mechanism:  
   - The system resets to its default state (green LED on) if no card swipe is detected for an extended period, ensuring smooth operation.  

 Key Outcomes:  
- Successfully implemented an automatic car parking toll gate system using RFID technology.  
- Enhanced toll collection efficiency by automating the process and reducing human error.  
- Demonstrated expertise in integrating microcontroller programming, RFID technology, and real-time control systems.  

Tools and Components Used:  
- Hardware:  
  - Arduino (or similar microcontroller)  
  - MFRC522 RFID module  
  - LEDs (Red and Green)  
  - Resistors, breadboard, and connecting wires  
- Software: 
  - Arduino IDE for programming  
  - SPI and MFRC522 libraries for RFID operation  


