#ifndef DueFastDIO_h
#define DueFastDIO_h
#include "Arduino.h"
#endif

extern inline void pinWrite(int pin, int value);
extern inline int pinRead(int pin);

extern inline void pinWrite(int pin, int value)
{
	if(value){
		g_APinDescription[pin].pPort -> PIO_SODR = g_APinDescription[pin].ulPin;
	}
  	else{    
		g_APinDescription[pin].pPort -> PIO_CODR = g_APinDescription[pin].ulPin;
	}
}

extern inline int pinRead(int pin)
{
	return !!(g_APinDescription[pin].pPort -> PIO_PDSR & g_APinDescription[pin].ulPin);
}
