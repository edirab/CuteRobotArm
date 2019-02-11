int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;
//const int dl = 2;
const int dl = 2000;

void setup() {
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
}

void loop() {
    digitalWrite( in1, HIGH ); 
    digitalWrite( in2, HIGH ); 
    digitalWrite( in3, LOW ); 
    digitalWrite( in4, LOW );
    delayMicroseconds(dl);

    digitalWrite( in1, LOW ); 
    digitalWrite( in2, HIGH ); 
    digitalWrite( in3, HIGH ); 
    digitalWrite( in4, LOW );
    delayMicroseconds(dl);

    digitalWrite( in1, LOW ); 
    digitalWrite( in2, LOW ); 
    digitalWrite( in3, HIGH ); 
    digitalWrite( in4, HIGH );
    delayMicroseconds(dl);

    digitalWrite( in1, HIGH ); 
    digitalWrite( in2, LOW ); 
    digitalWrite( in3, LOW ); 
    digitalWrite( in4, HIGH );
    delayMicroseconds(dl);
}
