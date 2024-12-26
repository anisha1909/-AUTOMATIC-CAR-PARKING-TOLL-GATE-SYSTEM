#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9
#define SS_PIN 10
#define RED_LED_PIN 2
#define GREEN_LED_PIN 3

MFRC522 rfid(SS_PIN, RST_PIN);


bool cardSwiped = false;

void setup() {
    Serial.begin(9600);
    SPI.begin();
    rfid.PCD_Init();

    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    
    
    digitalWrite(GREEN_LED_PIN, HIGH);
    digitalWrite(RED_LED_PIN, LOW);
    Serial.println("System initialized. Green LED is ON.");
}

void loop() {
   
    if (rfid.PICC_IsNewCardPresent()) {
        if (rfid.PICC_ReadCardSerial()) {
           
            Serial.print("Card UID: ");
            for (byte i = 0; i < rfid.uid.size; i++) {
                Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
                Serial.print(rfid.uid.uidByte[i], HEX);
            }
            Serial.println();

            
            if (!cardSwiped) {
                
                digitalWrite(RED_LED_PIN, HIGH);
                digitalWrite(GREEN_LED_PIN, LOW);
                Serial.println("Red LED is ON. (First swipe)");
                cardSwiped = true; 
            } else {
                
                digitalWrite(RED_LED_PIN, LOW);
                digitalWrite(GREEN_LED_PIN, HIGH);
                Serial.println("Green LED is ON. (Second swipe)");
                cardSwiped = false; 
            }
            
            
            rfid.PICC_HaltA();
        }
    }

    
    if (!cardSwiped) {
        digitalWrite(GREEN_LED_PIN, HIGH);
        digitalWrite(RED_LED_PIN, LOW);
    }
}
