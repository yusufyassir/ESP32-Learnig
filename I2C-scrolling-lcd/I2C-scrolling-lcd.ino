#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD at I2C address 0x27, with 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void scrollText(String text, int row) {
  int textLength = text.length(); // Get the total length of the text
  
  // Loop to shift text from left to right
  for (int i = 0; i < textLength; i++) {
    lcd.clear();  // Clear LCD for the new position of text
    lcd.setCursor(0, row);  // Set cursor to the specified row
    lcd.print(text.substring(i)); // Print substring of text from index 'i' to the end
    delay(500);  // Wait 500ms before shifting text
  }
}

void loop() {
  scrollText("Scrolling Text Example", 0); // Scroll text on row 0
}
