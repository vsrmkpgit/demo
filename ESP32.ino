void setup() 
{
    Serial.begin(115200); 
    Serial.println("Interfacfing Arduino with Esp32");
    Serial.println("Receiving data to Esp32");
}

void loop() 
{
   float a = analogRead(25);
   float b = ((a*5*3.3)/4095)+0.6;
    Serial.print("Voltage:");
    Serial.println(b);
    delay(100);
} 
