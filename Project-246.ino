#define Blink_LED 23
#define POT_PIN   A10
void setup() {
  Serial.begin(9600);
  pinMode(Blink_LED, OUTPUT);
}
void loop() {
  // reads the input on analog pin A0 (value between 0 and 1023)
  int In_POT_Value = analogRead(POT_PIN);

  // scales it to brightness (value between 0 and 255)
  int Brightness = map(In_POT_Value, 0, 1023, 0, 255);

  // sets the brightness LED that connects to  pin 3
  analogWrite(Blink_LED, Brightness);

  // print out the value

if((In_POT_Value >= 0 && In_POT_Value <=1023)|| (Brightness>=0 &&        Brightness<=255)) {
    Serial.print("POT Value: ");
    Serial.print(In_POT_Value);
    Serial.print(", Brightness Value: ");
    Serial.println(Brightness);
  }
  else
  {
    Serial.println("Undefined value");
  }
  
  delay(500);
  Serial.println("*******************************************");
}