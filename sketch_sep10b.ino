#include <LiquidCrystal.h>

const int pinA;
const int pinB;

volatile unsigned long pulseA = 0;
volatile unsigned long pulseB = 0;

int prevA = LOW;
int prevB = LOW;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() 
{
  PinMode (pinA, INPUT);
  PinMode (pinB, INPUT);

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Cnl 1 waiting");
  lcd.setCursor(0, 1);
  lcd.print("Cnl 2 waiting");
}

void watchPulse(int pin, int &prevstate, pulse)
{

}

void loop() 
{

}
