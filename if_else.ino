if (condition1) {
  // do Thing A
}
else if (condition2) {
  // do Thing B
}
else {
  // do Thing C
}






void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x= -1;
  int y= 2;
  if(x<y) {
    Serial.println("true");  
  }

}

//CODE FOR LED TRL USING IF ELSE
int A = 10;
int B = 20;

void setup()
{
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
    if( A > B){
        digitalWrite(5, HIGH);
    }else if(A == 12){
         digitalWrite(6, HIGH);
      }else{
         digitalWrite(9, HIGH);
      }
    
}
