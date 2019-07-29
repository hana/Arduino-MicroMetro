

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "MicroMetro.h"

MicroMetro::MicroMetro()    {
	this->interval = 1000;
}


MicroMetro::MicroMetro(unsigned long interval){
	this->interval = interval;
}


void MicroMetro::setInterval(unsigned long interval){
  this->interval = interval;
}

uint8_t MicroMetro::check()    {
  now = micros();

  if ( interval == 0 ){
    previous_time = now;
    return 1;
  }

  if ( (now - previous_time) >= interval) {
	    #ifdef NOCATCH_UP
	    previous_time = now ;
	    #else
	    previous_time += interval ;
	    #endif

      return 1;
  }

  return 0;

}

void MicroMetro::reset(){
  this->previous_time = micros();
}


