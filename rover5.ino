#define PWM_CH1 3 //PWM kanaal 1 snelheid motor
#define dir_CH1 2//richting kanaal 1

#define PWM_CH2 5 //PWM kanaal 2 snelheid motor
#define dir_CH2 4 //richting kanaal 2 

#define PWM_CH3 6 //PWM kanaal 3 snelheid motor
#define dir_CH3 7 //richting kanaal 3

#define PWM_CH4 10 //PWM kanaal 4 snelheid motor
#define dir_CH4 8 //richting kanaal 4

 int count = 0;

void setup()
{
pinMode (PWM_CH1, OUTPUT);
pinMode (PWM_CH2, OUTPUT);
pinMode (PWM_CH3, OUTPUT);
pinMode (PWM_CH4, OUTPUT);
pinMode (dir_CH1, OUTPUT);
pinMode (dir_CH2, OUTPUT);
pinMode (dir_CH3, OUTPUT);
pinMode (dir_CH4, OUTPUT);
}

void loop(){
   
analogWrite (PWM_CH1,200);
analogWrite (PWM_CH2,200);
analogWrite (PWM_CH3,200);
analogWrite (PWM_CH4,200);
 
switch (count) {

    case 0:    // VOORUIT
    digitalWrite (dir_CH1,HIGH);
    digitalWrite (dir_CH2,HIGH);
    digitalWrite (dir_CH3,LOW);
    digitalWrite (dir_CH4,LOW);
    delay(4000);
    count++;
    break;

    
    case 1:    // LINKS
    digitalWrite (dir_CH1,LOW);
    digitalWrite (dir_CH2,HIGH);
    digitalWrite (dir_CH3,HIGH);
    digitalWrite (dir_CH4,LOW);
    delay(750);
    count++;
    break;
    
    case 2:    // ACHTERUIT
    digitalWrite (dir_CH1,LOW);
    digitalWrite (dir_CH2,LOW);
    digitalWrite (dir_CH3,HIGH);
    digitalWrite (dir_CH4,HIGH);
    delay(4000);
    count++;
    break;
    
    case 3:    //  RECHTS
    digitalWrite (dir_CH1,HIGH);
    digitalWrite (dir_CH2,LOW);
    digitalWrite (dir_CH3,LOW);
    digitalWrite (dir_CH4,HIGH);
    delay(750);
    count++;
    break;
    
    case 4 :    //  VOORUIT
    digitalWrite (dir_CH1,HIGH);
    digitalWrite (dir_CH2,HIGH);
    digitalWrite (dir_CH3,LOW);
    digitalWrite (dir_CH4,LOW);
    delay(5000);
     count++;
    break;
    
  }

    analogWrite (PWM_CH1,0);
    analogWrite (PWM_CH2,0);
    analogWrite (PWM_CH3,0);
    analogWrite (PWM_CH4,0);

    delay(1000);
  
  
  
  delay(1);        // delay in between reads for stability 

  }

