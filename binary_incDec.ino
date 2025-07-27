const int led[4] = { 5, 4, 0, 2 }; 
const int buttonPin1 = 12;             
const int buttonPin2 = 13;

int count = 0;
bool prevButton1 = HIGH;
bool prevButton2 = HIGH;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(led[i], OUTPUT); 
  }

  pinMode(buttonPin1, INPUT_PULLUP); // Button with internal pull-up
  pinMode(buttonPin2, INPUT_PULLUP); 

  displayBinary(count);
}

void loop() {
  bool currentButton1 = digitalRead(buttonPin1);
  bool currentButton2 = digitalRead(buttonPin2);

  if (currentButton1 == LOW && prevButton1 == HIGH) {
    // Button press detected (falling edge)
    count++;
    if (count > 15) count = 0;

    displayBinary(count);
    delay(500); // debounce delay
    }
  else if(currentButton2 == LOW && prevButton2 == HIGH){
     count--;
     if (count > 15) count = 0;

    displayBinary(count);
    delay(500); // debounce delay
  }
      

  prevButton1 = currentButton1;
  prevButton2 = currentButton2;
}

void displayBinary(int num) {
  for (int i = 0; i < 4; i++) {
    digitalWrite(led[i], (num >> i) & 0x01);
  }
}
