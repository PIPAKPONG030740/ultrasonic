int motorPin1 = 2;
int motorPin2 = 3;
int motorPin3 = 4;
int motorPin4 = 5;
int delayTime = 50;
int speed = 50;
int delay_a = 30;
int delay_b = 30;

int sum = 0;
int x = 1;
int around;

void setup() {
  Serial.begin(9600);
 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);

}

void loop() {

  //around = Serial.read();
  //if(){
  while (sum <= 47) {
    sum = sum + x;
    Step_a(speed);
    Serial.println(sum);
    sum = sum + x;
    Step_b(speed);
    Serial.println(sum);
    sum = sum + x;
    Step_c(speed);
    Serial.println(sum);
    sum = sum + x;
    Step_d(speed);
    Serial.println(sum);
  }
  //   }
  while (0 >= sum) {
    sum = sum + x;
    Step_d(speed);
    Serial.println(sum);
    sum = sum + x;
    Step_c(speed);
    Serial.println(sum);
    sum = sum + x;
    Step_b(speed);
    Serial.println(sum);
    sum = sum + x;
    Step_a(speed);
    Serial.println(sum);
  }
  
}

void Stepleft(int delay_a) { //ฟังกชัน Stepleft มอเตอร์หมุนซ้าย
  Step_a(speed);
  Step_b(speed);
  Step_c(speed);
  Step_d(speed);
}

void Stepright(int delay_a) { //ฟังกชัน Stepright มอเตอร์หมุนขวา
  Step_d(speed);
  Step_c(speed);
  Step_b(speed);
  Step_a(speed);
}

void Step_a(int delay_a) { //ฟังก์ชัน Step_a
  digitalWrite(motorPin1, speed);
  digitalWrite(motorPin2, 0);
  digitalWrite(motorPin3, 0);
  digitalWrite(motorPin4, 0);
  delay(delay_b);
}

void Step_b(int delay_a) { //ฟังก์ชัน Step_b
  digitalWrite(motorPin1, 0);
  digitalWrite(motorPin2, speed);
  digitalWrite(motorPin3, 0);
  digitalWrite(motorPin4, 0);
  delay(delay_b);
}

void Step_c(int delay_a) { //ฟังก์ชัน Step_c
  digitalWrite(motorPin1, 0);
  digitalWrite(motorPin2, 0);
  digitalWrite(motorPin3, speed);
  digitalWrite(motorPin4, 0);
  delay(delay_b);
}

void Step_d(int delay_a) { //ฟังก์ชัน Step_d
  digitalWrite(motorPin1, 0);
  digitalWrite(motorPin2, 0);
  digitalWrite(motorPin3, 0);
  digitalWrite(motorPin4, speed);
  delay(delay_b);
}
