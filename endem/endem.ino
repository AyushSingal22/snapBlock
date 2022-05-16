const int ldr = A0;
const int lightConst = 100;
const int face_delay = 12;
const int face_not = 11;
const int face_loop = 10;
void dely();
void nt();
void whle();
void setup() {
  Serial.begin (9600);
  pinMode(ldr, INPUT);
  pinMode(face_delay, OUTPUT);
  pinMode(face_not, OUTPUT);
  pinMode(face_loop , OUTPUT);
  

}

void loop() {
    inputValue = analogRead(ldr);
    dely();
    nt();
    whle();
}
void dely(){
  if( ldr > lightConst){
    delay(2000);
    digitalWrite(face_delay,HIGH);
    
  }
}
void nt(){
  digitalWrite(face_not , HIGH);
  while(ldr > lightconst ) {
    digitalWrite( face_not , LOW );
  }
}
void whle(){
  if( ldr > lightConst){
    digitalWrite(face_while,HIGH);
    
  }
}
