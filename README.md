Lab7Sensors
===========

I recieved a check plus on my pre lab, and my requiered functionality was checked on 8 December 2014, before COB Lesson T38.

###Pre Lab

Testing my sensors showed voltages between 2.5V when an object was very close to the sensors to about 1.3V when the object was far away before the sensors started to lose their ability to pick up an object.

For my sensors, I will use register ADC10CTL0 and will enable  ADC10SHT01 to enable 8 ADC clocks, I will trun on the analog to digital converter by setting ADC10ON and I will enable interupts by also setting ADC10IE.

I will also enable ADC10SSEL1 to turn on ACLK.

For each sensor, I will connect it to an input on the MSP430.  When i want to get a reading from that sensor, I will turn on the input the sensor is connected to so the MSP can read in the value.  If the value is above a certain threshold, I will exit the function and turn on the LED.
