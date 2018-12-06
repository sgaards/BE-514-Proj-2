void setup() {
  // put your setup code here, to run once:
  //Master Sketch

  // face state
  int face = 0;

  // eye state
  bool l_eye = 1;
  bool r_eye = 1;

  // arm state
  int l_theta = 0;
  int r_theta = 0;

  // LCD state
  String message = "hello!";

  // Joystick state
  int js_x = 0;
  int js_y = 0;
  bool js_button = 0;

  // Buttons state
  bool home_mom_off = 1;

  // starting loop
  int mode = 1;
  int selection = 1;

  //Pin assignments
  int l_eye_pin = ;
  int r_eye_pin = ;
  int l_theta_pin = ;
  int r_theta_pin = ;
  /* LCD PINS*/
  int js_x_pin = A0;
  int js_y_pin = A1;
  int js_button_pin = D2;
  int home_mom_off_pin = D13;

  // Math game setup
  int num1= random(100);
  int num2 = random(100);
  int sign = random(3);
  int ans = 0;
  int hundreds = 0;
  int tens = 0;
  int ones = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  
  home_mom_off = digitalRead(home_mom_off_pin);
  if (home_mom_off = 0){
    mode = 1;
  }
  
  js_x = analogRead(js_x_pin);
  js_y = analogRead(js_y_pin);
  js_button = digitalRead(js_button_pin);
  
  if (js_y > threshold){
    selection = selection+1;
  }
  if (js_y < threshold) {
    selection = selection - 1;
  }
  if (selection = 0){
    selection =1;
  }
  
  }
  switch (mode) {
    
    case 1: //home
    switch (selection){
      case 1: // play LCD game
      //update display to "Play LCD game"
      if (js_button = 1) {
        //run LCD game
      }
      break;
      case 2: //play LED game
       //update display to "Play LED game"
      if (js_button = 1) {
        //run LED game
      }
      break;
      case 3: // play Math game
       //update display to "Play Math game"
      if (js_button = 1) {
        //run Math game
      }
      break;
    }
    break;
    
    case 2: //LCD Game
    // statements
    break;
    
    case 3: //LED Game
    // statements
    break;
    
    case 4: //Math Game
    // statements
    //break down the operation into string
    if (sign=1){
      message = "what is " + String(num1) + "plus" + String(num2) + "?";
      ans = num1+num2;
    }
    else {
      message = "what is " + String(num1) + "minus" + String(num2) + "?";
      ans = num1-num2;
    }
    
    break;
  }
  /* Check states
   * 
   *  Make changes based on loop setting
   *  Update states
   *  face int change
   *  l_eye bool change
   *  r_eye bool change
   *  l_theta int change
   *  r_theta int change
   *  message string change
   *  loop change
   */
}
