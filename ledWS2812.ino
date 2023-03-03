#define datain 7


void code_0()
{
  PORTD |= 1<<7; // pin 7 cao
_delay_us(0.2);
PORTD &= ~(1<<7); // pin 7 thap
_delay_us(0.425);
  
}
void code_1()
{
  PORTD |= 1<<7; // pin 7 cao
_delay_us(0.4);
PORTD &= ~(1<<7); // pin 7 thap
_delay_us(0.225);
}
void RES()
{
  PORTD &= ~(1<<7);//pin 7 thap
  _delay_us(51);
  
}

void red()
{
  for(int i=0;i<8;i++)
    {
        code_0();      
    }
    for(int i=0;i<8;i++)
    {
        code_1();      
    }
    for(int i=0;i<8;i++)
    {
        code_0();      
    } 
}
void blue()
{
  for(int i=0;i<16;i++)
    {
        code_0();    
    }
  for(int i=0;i<8;i++)
    code_1();

}
void green()
{
  for(int i=0;i<8;i++)
    code_1(); 
  for(int i=0;i<16;i++)
    code_0(); 
}

void yellow()
{
  for(int i=0;i<16;i++)
    code_1(); 
  for(int i=0;i<0;i++)
    code_0();
}
void damn()
{
  for(int i=0;i<8;i++)
    {
        code_1();      
    }
    for(int i=0;i<8;i++)
    {
        code_0();      
    }
    for(int i=0;i<8;i++)
    {
        code_1();      
    } 
}
void setup()
{
  pinMode(datain,OUTPUT);
 digitalWrite(datain,0);

}
void loop()
{
//code_1();
  red();
  
  green();
  blue();
  yellow();
  
  RES();
}
