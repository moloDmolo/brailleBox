int temp[6];
int a[]={0,1,1,0,0,0};
bool flags[]={false, false, false, false, false, false};
void setup() {

  // put your setup code here, to run once:
  for (int x = 2; x < 9; x++) {
    pinMode(x, INPUT);
    Serial.begin(9600);

  }

}

void loop() {
  // put your main code here, to run repeatedly:

temp[0] = digitalRead(2);
temp[1] = digitalRead(3);
temp[2] = digitalRead(4);
temp[3] = digitalRead(5);
temp[4] = digitalRead(6);
temp[5] = digitalRead(7);


for(int y=0; y<=5; y++){
if(temp[y] != 0){
  flags[y]=true;
  }


Serial.print(flags[y]);
Serial.print(",");
//Serial.print(temp[y]);
//Serial.print(",");

}
Serial.println("");

delay(300);
//Serial.print("one:");
//Serial.println(one);

//Serial.print("two:");
//Serial.println(two);
//
//Serial.print("three:");
//Serial.println(three);

//Serial.print("four:");
//Serial.println(four);

//Serial.print("five:");
//Serial.println(five);

//Serial.print("six:");
//Serial.println(six);



}
