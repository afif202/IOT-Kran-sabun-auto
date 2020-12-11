int sensorState = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, INPUT_PULLUP); //su
  pinMode(13, OUTPUT); //kran air
  pinMode(12, OUTPUT); //pompa sabun
  pinMode(11, OUTPUT); // hairdrayer
}

// the loop function runs over and over again forever
void loop() {
  sensorState = digitalRead(2);//baca sensor dipin 2
  if (sensorState == LOW)
  {
    delay(500);
     if (sensorState == LOW)
     {
    digitalWrite(13, HIGH);// nyalakan kran elektrik
    delay(2000);  //tunda 2 detik
     digitalWrite(13, LOW);  //matikan kran elektrik
     digitalWrite(12, HIGH); //nyalakan pompa sabum
     delay(500); // selama setengah detik
     digitalWrite(12, LOW); //matikan pompa sabun
     digitalWrite(13, HIGH); //nyalakan kran air
     delay(5000) ;// selama 5 detik
     digitalWrite(13, LOW); //matikan kran air
     digitalWrite(11, HIGH); //nyalakan hairdrayer
     delay(5000);  //selama 5 detik
     digitalWrite(11, LOW); // matikan hairdrayer
 }}
}
