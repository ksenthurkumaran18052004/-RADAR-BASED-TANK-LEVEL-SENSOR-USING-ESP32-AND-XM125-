/*
  Example 6: Distance Basic Readings

  Using the Acconeer XM125 A121 60GHz Pulsed Coherent Radar Sensor.

  This example shows how operate the XM125 when the device is in Distance Reading Mode.
  The sensor is initialized, then the distance values will print out to the terminal in 
  mm. 

  By: Madison Chodikov
  SparkFun Electronics
  Date: 2024/1/22
  SparkFun code, firmware, and software is released under the MIT License.
	Please see LICENSE.md for further details.

  Hardware Connections:
  QWIIC --> QWIIC

  Serial.print it out at 115200 baud to serial monitor.

  Feel like supporting our work? Buy a board from SparkFun!
  https://www.sparkfun.com/products/ - Qwiic XM125 Breakout
*/




// #include <Arduino.h>
// #include "SparkFun_Qwiic_XM125_Arduino_Library.h"

// SfeXM125 radarSensor;

// // I2C default address
// uint8_t i2cAddress = SFE_XM125_I2C_ADDRESS;

// // Setup Variables 
// uint32_t startVal = 0;
// uint32_t endVal = 0;
// uint32_t numDistances = 9;
// uint32_t calibrateNeeded = 0;
// uint32_t measDistErr = 0;

// // Error statuses 
// uint32_t errorStatus = 0;
// uint32_t distanceSetupError = 0;

// // Distance Variables 
// uint32_t distancePeakStrength0 = 0;
// uint32_t distancePeak0 = 0;
// uint32_t distancePeakStrength1 = 0;
// uint32_t distancePeak1 = 0;
// uint32_t distancePeakStrength2 = 0;
// uint32_t distancePeak2 = 0;
// uint32_t distancePeakStrength3 = 0;
// uint32_t distancePeak3 = 0;
// uint32_t distancePeakStrength4 = 0;
// uint32_t distancePeak4 = 0;
// uint32_t distancePeakStrength5 = 0;
// uint32_t distancePeak5 = 0;
// uint32_t distancePeakStrength6 = 0;
// uint32_t distancePeak6 = 0;
// uint32_t distancePeakStrength7 = 0;
// uint32_t distancePeak7 = 0;
// uint32_t distancePeakStrength8 = 0;
// uint32_t distancePeak8 = 0;
// uint32_t distancePeakStrength9= 0;
// uint32_t distancePeak9 = 0;

// void setup()
// {
//     // Start serial
//     Serial.begin(115200);
//     pinMode(18, OUTPUT);
//     digitalWrite(18,1);
//     Serial.println("XM125 Example 6: Basic Distance Readings");
//     Serial.println("");

//     Wire.begin();

//     // If begin is successful (0), then start example
//     if(radarSensor.begin(i2cAddress, Wire) == 1)
//     {
//         Serial.println("Begin");
//     }
//     else // Otherwise, infinite loop
//     {
//         Serial.println("Device failed to setup - Freezing code.");
//         while(1); // Runs forever
//     }

//     int32_t setupError = radarSensor.distanceBegin();
//     if(setupError != 0)
//     {
//       Serial.print("Distance Detection Start Setup Error: ");
//       Serial.println(setupError); 
//     }

//     // New-line and 0.5 second delay for easier reading
//     Serial.println();
//     delay(500);
// }

// void loop()
// {
//     distanceSetupError = radarSensor.distanceDetectorReadingSetup();
//     if(distanceSetupError != 0)
//     {
//       Serial.print("Distance Reading Setup Error: ");
//       Serial.println(distanceSetupError);
//     }

//     // Read PeakX Distance and PeakX Strength registers for the number of distances detected 
//     radarSensor.getDistancePeak0Distance(distancePeak0);
//     radarSensor.getDistancePeak0Strength(distancePeakStrength0);
//     radarSensor.getDistancePeak1Distance(distancePeak1);
//     radarSensor.getDistancePeak1Strength(distancePeakStrength1);
//     radarSensor.getDistancePeak2Distance(distancePeak2);
//     radarSensor.getDistancePeak2Strength(distancePeakStrength2);
//     radarSensor.getDistancePeak3Distance(distancePeak3);
//     radarSensor.getDistancePeak3Strength(distancePeakStrength3);
//     radarSensor.getDistancePeak4Distance(distancePeak4);
//     radarSensor.getDistancePeak4Strength(distancePeakStrength4);
//     radarSensor.getDistancePeak5Distance(distancePeak5);
//     radarSensor.getDistancePeak5Strength(distancePeakStrength5);
//     radarSensor.getDistancePeak6Distance(distancePeak6);
//     radarSensor.getDistancePeak6Strength(distancePeakStrength6);
//     radarSensor.getDistancePeak7Distance(distancePeak7);
//     radarSensor.getDistancePeak7Strength(distancePeakStrength7);
//     radarSensor.getDistancePeak8Distance(distancePeak8);
//     radarSensor.getDistancePeak8Strength(distancePeakStrength8);
//     radarSensor.getDistancePeak9Distance(distancePeak9);
//     radarSensor.getDistancePeak9Strength(distancePeakStrength9);

//     // If a peak distance was detected, then read out the distance and strength
//     if (distancePeak0 != 0) 
//     {
//       Serial.print("Peak0 Distance, Strength: ");
//       Serial.print(distancePeak0);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength0);
//       Serial.println();
//     }
//     if (distancePeak1 != 0) 
//     {
//       Serial.print("Peak1 Distance, Strength: ");
//       Serial.print(distancePeak1);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength1);
//       Serial.println();
//     }
//     if (distancePeak2 != 0) 
//     {
//       Serial.print("Peak2 Distance, Strength: ");
//       Serial.print(distancePeak2);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength2);
//       Serial.println();
//     }
//     if (distancePeak3 != 0) 
//     {
//       Serial.print("Peak3 Distance, Strength: ");
//       Serial.print(distancePeak3);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength3);
//       Serial.println();
//     }
//     if (distancePeak4 != 0) 
//     {
//       Serial.print("Peak4 Distance, Strength: ");
//       Serial.print(distancePeak4);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength4);
//       Serial.println();
//     }
//     if (distancePeak5 != 0) 
//     {
//       Serial.print("Peak5 Distance, Strength: ");
//       Serial.print(distancePeak5);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength5);
//       Serial.println();
//     }
//     if (distancePeak6 != 0) 
//     {
//       Serial.print("Peak6 Distance, Strength: ");
//       Serial.print(distancePeak6);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength6);
//       Serial.println();
//     }
//     if (distancePeak7 != 0) 
//     {
//       Serial.print("Peak7 Distance, Strength: ");
//       Serial.print(distancePeak7);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength7);
//       Serial.println();
//     }
//     if (distancePeak8 != 0) 
//     {
//       Serial.print("Peak8 Distance, Strength: ");
//       Serial.print(distancePeak8);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength8);
//       Serial.println();
//     }
//     if (distancePeak9 != 0) 
//     {
//       Serial.print("Peak9 Distance, Strength: ");
//       Serial.print(distancePeak9);
//       Serial.print("mm, ");
//       Serial.println(distancePeakStrength9);
//       Serial.println();
//     }

//     // Half a second delay for easier readings 
//     delay(500);
// }


// Please see from here.
// Tested and Working code .


#include <Arduino.h>
#include "SparkFun_Qwiic_XM125_Arduino_Library.h"

SfeXM125 radarSensor;

// I2C default address
uint8_t i2cAddress = SFE_XM125_I2C_ADDRESS;

// Setup Variables 
uint32_t distancePeak0 = 0;
uint32_t distancePeakStrength0 = 0;
const uint32_t tankHeight = 1155; // Tank height in mm

void setup()
{
    // Start serial
    Serial.begin(115200);
    pinMode(18, OUTPUT);
    digitalWrite(18,1);
    Serial.println("XM125 Tank Level Sensor Example");
    Serial.println("");

    Wire.begin();

    // Initialize the radar sensor
    if(radarSensor.begin(i2cAddress, Wire) == 1)
    {
        Serial.println("Begin");
    }
    else
    {
        Serial.println("Device failed to setup - Freezing code.");
        while(1); // Runs forever
    }

    //Settings for Medium   
    radarSensor.setDistanceReflectorShape(2); //Planar
    radarSensor.setDistancePeakSorting(2);    //Strongest
    radarSensor.setPresenceStart(0.05);          //presence start detector Tank start 
    radarSensor.setPresenceEnd(2.7);            //Tank end                           
    radarSensor.setDistanceSignalQuality(20); //Signal quality
    radarSensor.setDistanceThresholdSensitivity(0);//Threshold sensitivity
    radarSensor.setDistanceThresholdMethod(3); // Threshold method CFAR ->3
    radarSensor.setDistanceMaxStepLength(2); //Max step lengt 2
    radarSensor.setDistanceMaxProfile(3); //Max profile 3

    

    // Start distance detection
    int32_t setupError = radarSensor.distanceBegin();
    if(setupError != 0)
    {
      Serial.print("Distance Detection Start Setup Error: ");
      Serial.println(setupError); 
      while(1); // Runs forever if there's an error
    }

    Serial.println();
}

void loop()
{
    // Setup the distance detector for reading
    uint32_t distanceSetupError = radarSensor.distanceDetectorReadingSetup();
    if(distanceSetupError != 0)
    {
      Serial.print("Distance Reading Setup Error: ");
      Serial.println(distanceSetupError);
      delay(100); // Short delay to avoid spamming the error message
      return;
    }

    // Read Peak0 Distance and Peak0 Strength registers
    radarSensor.getDistancePeak0Distance(distancePeak0);
    radarSensor.getDistancePeak0Strength(distancePeakStrength0);

    // Calculate tank level
    uint32_t tankLevel = tankHeight - distancePeak0;

    // Print tank level if a valid distance is detected
    if (distancePeak0 != 0) 
    {
      Serial.print("Distance: ");
      Serial.print(distancePeak0);
      Serial.print(" mm, Strength: ");
      Serial.print(distancePeakStrength0);
      Serial.print(", Tank Level: ");
      Serial.print(tankLevel);
      Serial.println(" mm");
    }

    delay(100);
}


