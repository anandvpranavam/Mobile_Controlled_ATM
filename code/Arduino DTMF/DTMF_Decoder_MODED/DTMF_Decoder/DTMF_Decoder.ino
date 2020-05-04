/*
Project : DTMF Decoder
Owner   : Deepak Varade
Company : Deepak Electronics
Date    : 13/04/2015
**********************CIRCUIT TODAY**********************
*/
const int STQ=2; 
const int Q4=3;
const int Q3=4;
const int Q2=5;
const int Q1=6;
int I = 0;
int K = 0;
int M = 0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);

void setup()
{
  
  Serial.begin(9600);
  for(int i=0;i<4;i++)
  {
  pinMode(Q4,INPUT);
  pinMode(Q3,INPUT);
  pinMode(Q2,INPUT);
  pinMode(Q1,INPUT);
  } 
 // DDRC = 0x00;
  //DDRD = 0xFF;
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
 // lcd.print("Key Pressed : ");
}
void loop()
{
  int i=0;
  I=digitalRead(Q4 && Q3 && Q2 && Q1);
   // I = PINC;
    K = I+ 0x00;;
   
    if(M != K)
{ 
    switch (K)
{
  
//FOR Number 1
    case 0x01:
{   
    
    lcd.setCursor(i, 0);
    lcd.print("1");
    M = K;
    break;
}

//FOR Number 2

    case 0x02:   
{   
    lcd.setCursor(i, 0);
    lcd.print("2");
    M = K;   
    break;
}

//FOR Number 3

    case 0x03:   
{  
    lcd.setCursor(i, 0);
    lcd.print("3");
    M = K;
    break;
}

//FOR Number 4

    case 0x04:   
{
    lcd.setCursor(14, 0);
    lcd.print("4");
    M = K;
    break;
}

//FOR Number 5

    case 0x05:   
{
    lcd.setCursor(14, 0);
    lcd.print("5");
    M = K;
    break;
}

//FOR Number 6

    case 0x06:   
{
    lcd.setCursor(14, 0);
    lcd.print("6");
    M = K;
    break;
}

//FOR Number 7

    case 0x07:   
{
    lcd.setCursor(14, 0);
    lcd.print("7");
    M = K;
    break;
}

//FOR Number 8

    case 0x08:   
{
    lcd.setCursor(14, 0);
    lcd.print("8");
    M = K;
    break;
}

//FOR Number 9

    case 0x09:  
{
    lcd.setCursor(14, 0);
    lcd.print("9");
    M = K;
    break;
}

//FOR Number 0

    case 0x0A:  
{
    lcd.setCursor(14, 0);
    lcd.print("0");
    M = K;
    break;
}

//FOR Number #

    case 0x0C:  
{    
    lcd.setCursor(14, 0);
    lcd.print("#");
    M = K;
    break;
}

    default:
{
    M = 0;
    break;
}
}
}
}

