#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"

Adafruit_LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int x;
int y;


void setup() {
  pinMode(9, OUTPUT); // buzzer
  pinMode(8, INPUT);  // IR sensor

  lcd.begin(16, 2);
  lcd.clear();
  y = 500;
}

void loop() {
  x = digitalRead(8); // Sensor output

  lcd.clear();
  lcd.setCursor(0, 0);

  if (x == 0) { // Object detected
    lcd.print("NOT SAFE");
    digitalWrite(9, HIGH); 
     delay(y); // Used this for blinking effect
     lcd.clear();
    digitalWrite(9, LOW);
    delay(y/2); 
  } else {
    lcd.print("SAFE");
    digitalWrite(9, LOW); // Turn buzzer OFF
  }
delay(200);
  
}