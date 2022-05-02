int led = 5;
int button = 2;
int button2 = 6;
int led2 = 7;
int button3 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    
      if (digitalRead(button) == LOW) {
      digitalWrite(led, HIGH);
      Serial.write('7');
      delay(1000);
    } else {
      digitalWrite(led, LOW);
    }
        if (digitalRead(button2) == LOW) {
       digitalWrite(led, HIGH);
      Serial.write('1');
      delay(1000);
    } else {
      digitalWrite(led, LOW);
    }
         if (digitalRead(button3) == LOW) {
      digitalWrite(led, HIGH);
      Serial.write('5');
      delay(1000);
    } else {
      digitalWrite(led, LOW);
    }
    
  }
}
