#include <Stepper.h>

const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

const int ldrSol = A0;
const int ldrSag = A1;
const int tolerans = 30;
const float Kp = 0.05;

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(15);
}

void loop() {
  int solIsik = analogRead(ldrSol);
  int sagIsik = analogRead(ldrSag);

  // Ekrana yazdırma komutlarını geri ekledik
  Serial.print("Sol: "); Serial.print(solIsik);
  Serial.print(" | Sag: "); Serial.print(sagIsik);
  
  int hata = solIsik - sagIsik;
  Serial.print(" | Hata (Sapma): "); Serial.println(hata);

  if (abs(hata) > tolerans) {
    int atilacakAdim = hata * Kp;
    if(atilacakAdim == 0) atilacakAdim = (hata > 0) ? 1 : -1;
    myStepper.step(atilacakAdim);
  }
  delay(10);
}