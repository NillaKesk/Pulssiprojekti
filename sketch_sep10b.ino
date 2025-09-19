#include <LiquidCrystal.h>

const int pinA;
const int pinB;

volatile unsigned long pulseA = 0;
volatile unsigned long pulseB = 0;

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

  delay(1000);
}

void ChannelPulseA()
{
  pulseA++
}

void ChannelPulseB()
{
  pulseB++
}

void loop() 
{  
  lcd.begin(16, 2);
  lcd.clear;
  lcd.print("Cnl 1:");
  lcd.print("       ");

  lcd.begin(0, 1);
  lcd.clear;
  lcd.print("Cnl 2:");
  lcd.print("       ");

  delay(3000);
}



