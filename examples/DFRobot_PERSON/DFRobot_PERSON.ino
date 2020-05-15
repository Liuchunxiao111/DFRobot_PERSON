#include <DFRobot_PERSON.h>
DFRobot_PERSON PERSON;
void setup(){
    Serial.begin(115200);
    PERSON.set_name("liu chunxiao");
    PERSON.set_age(20);
}

void loop(){
    Serial.println("name:"+PERSON.get_name());
    Serial.println("age:"+String(PERSON.get_age()));
    delay(1000);  
}
