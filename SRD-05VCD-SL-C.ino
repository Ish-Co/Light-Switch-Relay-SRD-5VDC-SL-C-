//----------------------------
//Author      : Ismail Sghir
//Last updated: 12/28/2020
//----------------------------

int switchPin = 5;          // Switch pin
int ledPin = 6;             // LED pin
int trigPin = 7;            // Trigger pin 

void setup() 
{
    pinMode(switchPin, INPUT);     //set pin 5 to input for the light switch
    pinMode(ledPin, OUTPUT);       //set pin 6 to OUTPUT for LED indicator
    pinMode(trigPin, OUTPUT);      //set pin 7 to OUTPUT to turn ON/OFF the switch
    Serial.begin(9600);            //setup the serial monitor
}

void loop()
{
    if (switchPin == HIGH)                    //if the switch is pressed 
    {
        if (ledPin == LOW)                    //if the light was OFF
        {
            digitalWrite(ledPin, HIGH);       //Turn ON the led indicator 
            digitalWrite(trigPin, HIGH);      //Turn ON the light (2-way) or change the state ON/OFF (3-way)
            Serial.println("Light ON!");      //Print a message to serial monitor
        }
        else                                  //if the light was ON
        {
            digitalWrite(ledPin, LOW);        //Turn OFF the led indicator
            digitalWrite(trigPin, LOW);       //Turn OFF the light (2-way) or change the state ON/OFF (3-way)
            Serial.println("Light OFF!");     //Print a message to serial monitor
        }
    }
}



