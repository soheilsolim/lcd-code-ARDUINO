#include <LiquidCrystal.h>
// (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(0, 1, 8, 9, 10, 11); // پیکربندی ال سی دی

void setup()
{
lcd.begin(16,2);//lcd.begin(soton,satr)
}
void loop()
{
lcd.setCursor(0,0); //soton,satr
lcd.print(25);
lcd.setCursor(0, 1);

lcd.print("iot is the best");
delay(1000);
//lcd.scrollDisplayLeft();
//lcd.setCursor(0, 0);
}
// satr===> ofoghi
//soton===>amodi