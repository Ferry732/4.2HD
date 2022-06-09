int RED_LED = D1;
int YELLOW_LED = D2;
int GREEN_LED = D3;


void setup() {
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    
    Particle.function("RedLed", Red);
    Particle.function("YellowLed", Yellow);
    Particle.function("GreenLed", Green);
    
}
 

int Red(String command){
    if (command == "Red"){
        digitalWrite(RED_LED, HIGH);
        return 1;
    }
    
}

int Yellow(String command){
    if (command == "On"){
        digitalWrite(YELLOW_LED, HIGH);
        return 1;
       
    }
}

int Green(String command){
    if (command == "On"){
        digitalWrite(GREEN_LED, HIGH);
        return 1;
     
    }
}

void loop() {
   
   
}