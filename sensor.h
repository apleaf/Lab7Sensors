

#ifndef SENSOR_H_
#define SENSOR_H_

void enableADC10Subsystem();
void initLEDs();
unsigned int getLeftSensorReading();
unsigned int getRightSensorReading();
unsigned char isLeftSensorCloseToWall();
unsigned char isRightSensorCloseToWall();

#endif
