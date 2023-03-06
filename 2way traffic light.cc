//TRAFFIC LIGHT 1
int red1 = 10;
int yellow1 = 9;
int green1 = 8;
int Button =0;

// traffic light 2
int red2 = 13;
int yellow2 = 12;
int green2 = 11;
int button=0;
void setup (){
  //light1
  pinMode (red1, OUTPUT);
  pinMode (yellow1, OUTPUT);
  pinMode (green1, OUTPUT);
   //light2
  pinMode (red2, OUTPUT);
  pinMode (yellow2, OUTPUT);
  pinMode (green2, OUTPUT);
}
void loop () {
  changeLights ();
  delay(10000);
}
  void changeLights () {
    //both yellow turns on
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    delay(7000);
    //TURNS OFF BOTH YELLOW AND TURNS ON RED1 AND GREEN2
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
     digitalWrite(red2, LOW);
    digitalWrite(green2, HIGH);
    delay(7000);
      //both of the yellow lights turns on
        digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(green2, LOW);
    delay(3000);
       //turns off both yellow light and turns on green1 and red2
      digitalWrite(green1, HIGH);
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, LOW);
     digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);
    delay(7000);
  }



