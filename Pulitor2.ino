// Initialisation des leds
int led_r[] = {8, 10, 12};
int led_v[] = {9, 11, 13};

// Initialisation des capteurs à ultrasons
int trig[] = {4, 2, 6};
int echo[] = {5, 3, 7};

// Déclaration des sautres variables
float distance_1;
float distance_2;
float distance_3;

void setup() {
  for (int i; i < 3; i++){
  pinMode(led_r[i], OUTPUT);
  pinMode(led_v[i], OUTPUT);
  pinMode(trig[i], OUTPUT);
  pinMode(echo[i], INPUT);
  }
}

void loop() {
  distance_1 = lecture_ultrason_1();
  allumage_1();

  distance_2 = lecture_ultrason_2();
  allumage_2();

  distance_3 = lecture_ultrason_3();
  allumage_3();
} 

float lecture_ultrason_1(){
  digitalWrite(trig[0], LOW);
  delayMicroseconds(2);
  digitalWrite(trig[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(trig[0], LOW);

  unsigned long microseconde1 = pulseIn(echo[0], HIGH);
  float distance1 = microseconde1 / 29.00 / 2;

  return distance1;
}

float lecture_ultrason_2(){
  digitalWrite(trig[1], LOW);
  delayMicroseconds(2);
  digitalWrite(trig[1], HIGH);
  delayMicroseconds(10);
  digitalWrite(trig[1], LOW);

  unsigned long microseconde2 = pulseIn(echo[1], HIGH);
  float distance2 = microseconde2 / 29.00 / 2;
  
  return distance2;
}

float lecture_ultrason_3(){
  digitalWrite(trig[2], LOW);
  delayMicroseconds(2);
  digitalWrite(trig[2], HIGH);
  delayMicroseconds(10);
  digitalWrite(trig[2], LOW);

  unsigned long microseconde3 = pulseIn(echo[2], HIGH);
  float distance3 = microseconde3 / 29.00 / 2;
  
  return distance3;
}

void allumage_1(){
  if (distance_1 <= 15.00) 
  {
    digitalWrite(led_r[0], LOW);
    digitalWrite(led_v[0], HIGH);
  }
  else 
  {
    digitalWrite(led_v[0], LOW);
    digitalWrite(led_r[0], HIGH);
  }
}

void allumage_2(){
  if (distance_2 <= 15.00) 
  {
    digitalWrite(led_r[1], LOW);
    digitalWrite(led_v[1], HIGH);
  }
  else 
  {
    digitalWrite(led_v[1], LOW);
    digitalWrite(led_r[1], HIGH);
  }
}

void allumage_3(){
  if (distance_3 <= 15.00) 
  {
    digitalWrite(led_r[2], LOW);
    digitalWrite(led_v[2], HIGH);
  }
  else 
  {
    digitalWrite(led_v[2], LOW);
    digitalWrite(led_r[2], HIGH);
  }
}