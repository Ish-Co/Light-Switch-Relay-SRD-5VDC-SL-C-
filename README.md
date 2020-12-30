# Light-Switch-Relay-SRD-5VDC-SL-C-
A mini project that lets you control home light using low voltage DC [SRD-5VDC-SL-C].

** Required Components: **
- Arduino Uno (or any other controller)
- SRD-5VDC-SL-C (or any other relay)

** wiring Diagram: **
> One-way light switch that can be controlled only by the microcontroller.
![One-way Wiring Diagram](https://github.com/Ish-Co/Light-Switch-Relay-SRD-5VDC-SL-C-/blob/main/img/1-Way%20Relay%20Wiring%20Diagram.png)
> Three-way ligjt switch that can be controlled using the microcontroller and a three way light switch
![Three-way Wiring Diagram](https://github.com/Ish-Co/Light-Switch-Relay-SRD-5VDC-SL-C-/blob/main/img/3-Way%20Relay%20Wiring%20Diagram.png)

** Code **
>NOTE: NO LIBRARY IS REQUIRED FOR THIS PROJECT
```
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
```
