int buttonPin1 = 3;  
int buttonPin2 = 2;    
  int ledPin =  9;   
  int value =0;     
void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin1, INPUT);     
  pinMode(buttonPin2, INPUT);
}

void loop(){
if (digitalRead(buttonPin1) == LOW) {
  value--; 
  } 
  else if (digitalRead(buttonPin2) == LOW) { 
    value++; 
    } 
  value = constrain(value, 0, 255); 
  analogWrite(ledPin, value); 
  delay(10); 
}

