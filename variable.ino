//variable-place store a piece of data
//-can change content of variable
//-only hold data type that you define

//RESTRICTIONS
//-  my num  -wrong
//-  my#num  -wrong
//-  mynum9  -right



//global variable

int pin = 13;

void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  digitalWrite(pin, HIGH);
} 


////****
//local variable
void setup()
{
  int pin = 13;
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
} 
void loop()
{
  digitalWrite(pin, LOW); // wrong: pin is not in scope here.
} 


int pin = 13;
int pin2 = pin;
pin = 12; //now pin value is updated from 13 to 12 so new valye of pin is 12





const float pi = 3.14;
float x;
// ....
x = pi * 2; // it's fine to use consts in math
pi = 7;     // illegal - you can't write to (modify) a constant
