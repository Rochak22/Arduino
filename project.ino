#include <LiquidCrystal.h>
String voice;
String old;
String encrypt="";
String encrypt2="";
String morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",
".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
"...-",".--","-..-","-.--","--.."};
char ch;
const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available())   
  {                           
  delay(10);                   
  char c = Serial.read();      
  if (c == '#') {break;}       
  voice += c;
  }

  if (voice.length() > 1) {
    Serial.println("\n"+voice);
    //ROT-13 Encryption
    for(int i=0;i<voice.length();i++)
  {
    int num=voice[i];
    if(num>=65 && num<=90)
    {
      num=num%65;
      num=num+13+65;
      if(num>90)
      {
        int rem=num%91;
        num=65+rem;
      }
      ch=num;
    }
    if(num>=97 && num<=122)
    {
      num=num%97;
      num=num+13+97;
      if(num>122)
      {
        int rem=num%123;
        num=97+rem;
      }
      ch=num;
    }
    if(num==32)
    {
      ch=num;
    }
    if(encrypt.length()<voice.length())
    {
    encrypt=encrypt+ch;
    }
  }
  //Morse Code Encryption
  for(int i=0;i<voice.length();i++)
  {
    int num2=voice[i];
    if(num2>=65 && num2<=90)
    {
      num2=num2%65;
      encrypt2+=morse[num2];
      encrypt2+=" ";
    }
    if(num2>=97 && num2<=122)
    {
      num2=num2%97;
      encrypt2+=morse[num2];
      encrypt2+=" ";
    }
    if(num2==32)
    {
      encrypt2+=" ";
    }
  }
  Serial.println(encrypt);
  Serial.println(encrypt2);
  }
  Serial.print(" ");

  lcd.setCursor(0,0);
  lcd.print(encrypt2);
  lcd.setCursor(0,1);
  lcd.print(encrypt);

  for (int positionCounter = 0; positionCounter < 3; positionCounter++) {
    lcd.scrollDisplayLeft();

  }

  
  delay(1000);
  voice="";
  encrypt="";
  encrypt2="";
}
