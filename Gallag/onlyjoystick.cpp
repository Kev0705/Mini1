const int AXIS_X = A0;
const int AXIS_Y = A1;
const int SW_P = 1;

void setup() {
    Serial.begin(9600);
    pinMode(SW_P, INPUT_PULLUP);
}
void loop() {
    //X축 방향값
    if (analogRead(AXIS_X) <= 300)
    {
        Serial.println('A');
    }
    else if (analogRead(AXIS_X) >= 700) {
        Serial.println('D');
    }
    //Y축 방향값
    if (analogRead(AXIS_Y) <= 300) {
        Serial.println('W');
    }
    else if (analogRead(AXIS_Y) >= 700) {
        Serial.println('S');
    }
    delay(100);
}