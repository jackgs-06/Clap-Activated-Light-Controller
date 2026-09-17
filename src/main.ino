

int Led=0;//define LED port
int buttonpin=1; //define switch port
int ledState;
int  val;//define digital variable val
int counter;
unsigned long previousMillis;
unsigned long currentMillis;

void  setup()
{
Serial.begin(9600);
pinMode(Led,OUTPUT);//define LED as a output port
pinMode(buttonpin,INPUT);//define switch as a output port
ledState = LOW;
val = LOW;
counter = 0;
previousMillis = 0;
}
void  loop(){ 

currentMillis = millis(); //start timer

if(currentMillis - previousMillis >= 1250){ // reset the counter if the claps are not performed within an interval
    counter = 0;
    Serial.print("cleared");
    previousMillis = currentMillis; // reset the timer
  }

val=digitalRead(buttonpin);//read the value of the digital interface 3 assigned to val 

if(val==HIGH) { //when the switch sensor have signal, LED blink
  counter++;
  if(counter == 2){ //this allows for the double clapfeature
    ledState=!ledState;
    Serial.print("flipped");
    Serial.print("\n");
    digitalWrite(Led, ledState);
    delay(500);
    counter = 0; //reset the counter
  }
  delay(100);
  }

}

