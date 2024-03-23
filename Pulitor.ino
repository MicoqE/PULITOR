# include <AFMotor.h> // Importation de la bibliothèque du shield L293d

// Déclaration  des broches des moteurs
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);

// Déclaration des broches des capteurs à ultrasons
int trig[] = {A0, A2, A4};
int echo[] = {A1, A3, A5};

// Déclaration des sautres variables
float distance_1;
float distance_2;
float distance_3;

int tempo = 2000;

void setup() { // Initialisation des variables 
  for (int i; i < 3; i++){
  pinMode(trig[i], OUTPUT);
  pinMode(echo[i], INPUT);
  }
  motor1.setSpeed(100);
  motor1.run(RELEASE);

  motor2.setSpeed(100);
  motor2.run(RELEASE);

  motor3.setSpeed(150);
  motor3.run(RELEASE);
}

void loop() {
  nettoyage();

  distance_1 = lecture_ultrason_1();
  distance_2 = lecture_ultrason_2();
  distance_3 = lecture_ultrason_3();

  if (distance_1 > 20)
  {
    avancer();
  }
  else
  {
    if (distance_2 <= 20 && distance_3 <= 20)
      reculer();
    else if (distance_3 <= 20)
      tourner_gauche();
    else if (distance_2 <= 20)
      tourner_droite();
    else {
      motor1.run(RELEASE);
      motor2.run(RELEASE);
      motor3.run(RELEASE);
    }
  }
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

void avancer(){
  do
  {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    distance_1 = lecture_ultrason_1();
  }while (distance_1 > 20);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void reculer(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  delay(tempo);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void tourner_gauche(){
  motor2.run(FORWARD);
  delay(tempo);
  motor2.run(RELEASE);
}

void tourner_droite(){
  motor1.run(FORWARD);
  delay(tempo);
  motor1.run(RELEASE);
}

void nettoyage(){
  motor3.run(FORWARD);
}